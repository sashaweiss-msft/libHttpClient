// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once
#include "pch.h"

struct HC_MOCK_CALL : public HC_CALL
{
    HCMockMatchedCallback matchedCallback{ nullptr };
    void* matchCallbackContext{ nullptr };
};

bool Mock_Internal_HCHttpCallPerformAsync(_In_ HCCallHandle originalCall);
HRESULT Mock_Internal_ReadRequestBodyIntoMemory(_In_ HCCallHandle originalCall, _Out_ http_internal_vector<uint8_t>* bodyBytes);
