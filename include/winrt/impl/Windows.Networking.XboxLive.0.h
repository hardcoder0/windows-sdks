// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_XboxLive_0_H
#define WINRT_Windows_Networking_XboxLive_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Networking
{
    struct HostName;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
namespace winrt::Windows::Networking::XboxLive
{
    enum class XboxLiveEndpointPairCreationBehaviors : uint32_t
    {
        None = 0,
        ReevaluatePath = 0x1,
    };
    enum class XboxLiveEndpointPairCreationStatus : int32_t
    {
        Succeeded = 0,
        NoLocalNetworks = 1,
        NoCompatibleNetworkPaths = 2,
        LocalSystemNotAuthorized = 3,
        Canceled = 4,
        TimedOut = 5,
        RemoteSystemNotAuthorized = 6,
        RefusedDueToConfiguration = 7,
        UnexpectedInternalError = 8,
    };
    enum class XboxLiveEndpointPairState : int32_t
    {
        Invalid = 0,
        CreatingOutbound = 1,
        CreatingInbound = 2,
        Ready = 3,
        DeletingLocally = 4,
        RemoteEndpointTerminating = 5,
        Deleted = 6,
    };
    enum class XboxLiveNetworkAccessKind : int32_t
    {
        Open = 0,
        Moderate = 1,
        Strict = 2,
    };
    enum class XboxLiveQualityOfServiceMeasurementStatus : int32_t
    {
        NotStarted = 0,
        InProgress = 1,
        InProgressWithProvisionalResults = 2,
        Succeeded = 3,
        NoLocalNetworks = 4,
        NoCompatibleNetworkPaths = 5,
        LocalSystemNotAuthorized = 6,
        Canceled = 7,
        TimedOut = 8,
        RemoteSystemNotAuthorized = 9,
        RefusedDueToConfiguration = 10,
        UnexpectedInternalError = 11,
    };
    enum class XboxLiveQualityOfServiceMetric : int32_t
    {
        AverageLatencyInMilliseconds = 0,
        MinLatencyInMilliseconds = 1,
        MaxLatencyInMilliseconds = 2,
        AverageOutboundBitsPerSecond = 3,
        MinOutboundBitsPerSecond = 4,
        MaxOutboundBitsPerSecond = 5,
        AverageInboundBitsPerSecond = 6,
        MinInboundBitsPerSecond = 7,
        MaxInboundBitsPerSecond = 8,
    };
    enum class XboxLiveSocketKind : int32_t
    {
        None = 0,
        Datagram = 1,
        Stream = 2,
    };
    struct IXboxLiveDeviceAddress;
    struct IXboxLiveDeviceAddressStatics;
    struct IXboxLiveEndpointPair;
    struct IXboxLiveEndpointPairCreationResult;
    struct IXboxLiveEndpointPairStateChangedEventArgs;
    struct IXboxLiveEndpointPairStatics;
    struct IXboxLiveEndpointPairTemplate;
    struct IXboxLiveEndpointPairTemplateStatics;
    struct IXboxLiveInboundEndpointPairCreatedEventArgs;
    struct IXboxLiveQualityOfServiceMeasurement;
    struct IXboxLiveQualityOfServiceMeasurementStatics;
    struct IXboxLiveQualityOfServiceMetricResult;
    struct IXboxLiveQualityOfServicePrivatePayloadResult;
    struct XboxLiveDeviceAddress;
    struct XboxLiveEndpointPair;
    struct XboxLiveEndpointPairCreationResult;
    struct XboxLiveEndpointPairStateChangedEventArgs;
    struct XboxLiveEndpointPairTemplate;
    struct XboxLiveInboundEndpointPairCreatedEventArgs;
    struct XboxLiveQualityOfServiceMeasurement;
    struct XboxLiveQualityOfServiceMetricResult;
    struct XboxLiveQualityOfServicePrivatePayloadResult;
}
namespace winrt::impl
{
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPair>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveDeviceAddress>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPair>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveNetworkAccessKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Networking::XboxLive::XboxLiveSocketKind>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveDeviceAddress" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveDeviceAddressStatics" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPair>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPair" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairCreationResult" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairStateChangedEventArgs" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairStatics" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairTemplate" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairTemplateStatics" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveInboundEndpointPairCreatedEventArgs" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMeasurement" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMeasurementStatics" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMetricResult" };
    };
    template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServicePrivatePayloadResult" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveDeviceAddress>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveDeviceAddress" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPair>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPair" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationResult" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairStateChangedEventArgs" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairTemplate" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveInboundEndpointPairCreatedEventArgs" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMeasurement" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMetricResult" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServicePrivatePayloadResult" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationBehaviors" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationStatus" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairState>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairState" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveNetworkAccessKind>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveNetworkAccessKind" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMeasurementStatus" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMetric" };
    };
    template <> struct name<Windows::Networking::XboxLive::XboxLiveSocketKind>
    {
        static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveSocketKind" };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
    {
        static constexpr guid value{ 0xF5BBD279,0x3C86,0x4B57,{ 0xA3,0x1A,0xB9,0x46,0x24,0x08,0xFD,0x01 } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
    {
        static constexpr guid value{ 0x5954A819,0x4A79,0x4931,{ 0x82,0x7C,0x7F,0x50,0x3E,0x96,0x32,0x63 } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveEndpointPair>
    {
        static constexpr guid value{ 0x1E9A839B,0x813E,0x44E0,{ 0xB8,0x7F,0xC8,0x7A,0x09,0x34,0x75,0xE4 } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
    {
        static constexpr guid value{ 0xD9A8BB95,0x2AAB,0x4D1E,{ 0x97,0x94,0x33,0xEC,0xC0,0xDC,0xF0,0xFE } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
    {
        static constexpr guid value{ 0x592E3B55,0xDE08,0x44E7,{ 0xAC,0x3B,0xB9,0xB9,0xA1,0x69,0x58,0x3A } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
    {
        static constexpr guid value{ 0x64316B30,0x217A,0x4243,{ 0x8E,0xE1,0x67,0x29,0x28,0x1D,0x27,0xDB } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
    {
        static constexpr guid value{ 0x6B286ECF,0x3457,0x40CE,{ 0xB9,0xA1,0xC0,0xCF,0xE0,0x21,0x3E,0xA7 } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
    {
        static constexpr guid value{ 0x1E13137B,0x737B,0x4A23,{ 0xBC,0x64,0x08,0x70,0xF7,0x56,0x55,0xBA } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
    {
        static constexpr guid value{ 0xDC183B62,0x22BA,0x48D2,{ 0x80,0xDE,0xC2,0x39,0x68,0xBD,0x19,0x8B } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
    {
        static constexpr guid value{ 0x4D682BCE,0xA5D6,0x47E6,{ 0xA2,0x36,0xCF,0xDE,0x5F,0xBD,0xF2,0xED } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
    {
        static constexpr guid value{ 0x6E352DCA,0x23CF,0x440A,{ 0xB0,0x77,0x5E,0x30,0x85,0x7A,0x82,0x34 } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
    {
        static constexpr guid value{ 0xAEEC53D1,0x3561,0x4782,{ 0xB0,0xCF,0xD3,0xAE,0x29,0xD9,0xFA,0x87 } };
    };
    template <> struct guid_storage<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
    {
        static constexpr guid value{ 0x5A6302AE,0x6F38,0x41C0,{ 0x9F,0xCC,0xEA,0x6C,0xB9,0x78,0xCA,0xFC } };
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveDeviceAddress>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveDeviceAddress;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPair>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveEndpointPair;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult;
    };
    template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>
    {
        using type = Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult;
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SnapshotChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SnapshotChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetSnapshotAsBase64(void**) noexcept = 0;
            virtual int32_t __stdcall GetSnapshotAsBuffer(void**) noexcept = 0;
            virtual int32_t __stdcall GetSnapshotAsBytes(uint32_t, uint8_t*, uint32_t*) noexcept = 0;
            virtual int32_t __stdcall Compare(void*, int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsValid(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsLocal(bool*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkAccessKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromSnapshotBase64(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromSnapshotBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromSnapshotBytes(uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall GetLocal(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxSnapshotBytesSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPair>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_StateChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_StateChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall DeleteAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetRemoteSocketAddressBytes(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetLocalSocketAddressBytes(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_State(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Template(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteDeviceAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemoteHostName(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemotePort(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalHostName(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocalPort(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsExistingPathEvaluation(bool*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointPair(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewState(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindEndpointPairBySocketAddressBytes(uint32_t, uint8_t*, uint32_t, uint8_t*, void**) noexcept = 0;
            virtual int32_t __stdcall FindEndpointPairByHostNamesAndPorts(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_InboundEndpointPairCreated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_InboundEndpointPairCreated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CreateEndpointPairDefaultAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEndpointPairWithBehaviorsAsync(void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEndpointPairForPortsDefaultAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateEndpointPairForPortsWithBehaviorsAsync(void*, void*, void*, uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_SocketKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_InitiatorBoundPortRangeLower(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_InitiatorBoundPortRangeUpper(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_AcceptorBoundPortRangeLower(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_AcceptorBoundPortRangeUpper(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_EndpointPairs(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetTemplateByName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Templates(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EndpointPair(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MeasureAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetMetricResultsForDevice(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetMetricResultsForMetric(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetMetricResult(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetPrivatePayloadResult(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_Metrics(void**) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAddresses(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShouldRequestPrivatePayloads(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldRequestPrivatePayloads(bool) noexcept = 0;
            virtual int32_t __stdcall get_TimeoutInMilliseconds(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TimeoutInMilliseconds(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfProbesToAttempt(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_NumberOfProbesToAttempt(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_NumberOfResultsPending(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MetricResults(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrivatePayloadResults(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall PublishPrivatePayloadBytes(uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall ClearPrivatePayload() noexcept = 0;
            virtual int32_t __stdcall get_MaxSimultaneousProbeConnections(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxSimultaneousProbeConnections(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsSystemOutboundBandwidthConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSystemOutboundBandwidthConstrained(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsSystemInboundBandwidthConstrained(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSystemInboundBandwidthConstrained(bool) noexcept = 0;
            virtual int32_t __stdcall get_PublishedPrivatePayload(void**) noexcept = 0;
            virtual int32_t __stdcall put_PublishedPrivatePayload(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxPrivatePayloadSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Metric(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(uint64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceAddress(void**) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress
    {
        auto SnapshotChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const& handler) const;
        using SnapshotChanged_revoker = impl::event_revoker<Windows::Networking::XboxLive::IXboxLiveDeviceAddress, &impl::abi_t<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>::remove_SnapshotChanged>;
        SnapshotChanged_revoker SnapshotChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const& handler) const;
        auto SnapshotChanged(winrt::event_token const& token) const noexcept;
        auto GetSnapshotAsBase64() const;
        auto GetSnapshotAsBuffer() const;
        auto GetSnapshotAsBytes(array_view<uint8_t> buffer, uint32_t& bytesWritten) const;
        auto Compare(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& otherDeviceAddress) const;
        [[nodiscard]] auto IsValid() const;
        [[nodiscard]] auto IsLocal() const;
        [[nodiscard]] auto NetworkAccessKind() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics
    {
        auto CreateFromSnapshotBase64(param::hstring const& base64) const;
        auto CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
        auto CreateFromSnapshotBytes(array_view<uint8_t const> buffer) const;
        auto GetLocal() const;
        [[nodiscard]] auto MaxSnapshotBytesSize() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair
    {
        auto StateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const& handler) const;
        using StateChanged_revoker = impl::event_revoker<Windows::Networking::XboxLive::IXboxLiveEndpointPair, &impl::abi_t<Windows::Networking::XboxLive::IXboxLiveEndpointPair>::remove_StateChanged>;
        StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const& handler) const;
        auto StateChanged(winrt::event_token const& token) const noexcept;
        auto DeleteAsync() const;
        auto GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddress) const;
        auto GetLocalSocketAddressBytes(array_view<uint8_t> socketAddress) const;
        [[nodiscard]] auto State() const;
        [[nodiscard]] auto Template() const;
        [[nodiscard]] auto RemoteDeviceAddress() const;
        [[nodiscard]] auto RemoteHostName() const;
        [[nodiscard]] auto RemotePort() const;
        [[nodiscard]] auto LocalHostName() const;
        [[nodiscard]] auto LocalPort() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPair>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult
    {
        [[nodiscard]] auto DeviceAddress() const;
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto IsExistingPathEvaluation() const;
        [[nodiscard]] auto EndpointPair() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs
    {
        [[nodiscard]] auto OldState() const;
        [[nodiscard]] auto NewState() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics
    {
        auto FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress) const;
        auto FindEndpointPairByHostNamesAndPorts(Windows::Networking::HostName const& localHostName, param::hstring const& localPort, Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort) const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate
    {
        auto InboundEndpointPairCreated(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const& handler) const;
        using InboundEndpointPairCreated_revoker = impl::event_revoker<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate, &impl::abi_t<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>::remove_InboundEndpointPairCreated>;
        InboundEndpointPairCreated_revoker InboundEndpointPairCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const& handler) const;
        auto InboundEndpointPairCreated(winrt::event_token const& token) const noexcept;
        auto CreateEndpointPairAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const;
        auto CreateEndpointPairAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const& behaviors) const;
        auto CreateEndpointPairForPortsAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, param::hstring const& initiatorPort, param::hstring const& acceptorPort) const;
        auto CreateEndpointPairForPortsAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, param::hstring const& initiatorPort, param::hstring const& acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const& behaviors) const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto SocketKind() const;
        [[nodiscard]] auto InitiatorBoundPortRangeLower() const;
        [[nodiscard]] auto InitiatorBoundPortRangeUpper() const;
        [[nodiscard]] auto AcceptorBoundPortRangeLower() const;
        [[nodiscard]] auto AcceptorBoundPortRangeUpper() const;
        [[nodiscard]] auto EndpointPairs() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics
    {
        auto GetTemplateByName(param::hstring const& name) const;
        [[nodiscard]] auto Templates() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveInboundEndpointPairCreatedEventArgs
    {
        [[nodiscard]] auto EndpointPair() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveInboundEndpointPairCreatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement
    {
        auto MeasureAsync() const;
        auto GetMetricResultsForDevice(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const;
        auto GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const& metric) const;
        auto GetMetricResult(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const& metric) const;
        auto GetPrivatePayloadResult(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const;
        [[nodiscard]] auto Metrics() const;
        [[nodiscard]] auto DeviceAddresses() const;
        [[nodiscard]] auto ShouldRequestPrivatePayloads() const;
        auto ShouldRequestPrivatePayloads(bool value) const;
        [[nodiscard]] auto TimeoutInMilliseconds() const;
        auto TimeoutInMilliseconds(uint32_t value) const;
        [[nodiscard]] auto NumberOfProbesToAttempt() const;
        auto NumberOfProbesToAttempt(uint32_t value) const;
        [[nodiscard]] auto NumberOfResultsPending() const;
        [[nodiscard]] auto MetricResults() const;
        [[nodiscard]] auto PrivatePayloadResults() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics
    {
        auto PublishPrivatePayloadBytes(array_view<uint8_t const> payload) const;
        auto ClearPrivatePayload() const;
        [[nodiscard]] auto MaxSimultaneousProbeConnections() const;
        auto MaxSimultaneousProbeConnections(uint32_t value) const;
        [[nodiscard]] auto IsSystemOutboundBandwidthConstrained() const;
        auto IsSystemOutboundBandwidthConstrained(bool value) const;
        [[nodiscard]] auto IsSystemInboundBandwidthConstrained() const;
        auto IsSystemInboundBandwidthConstrained(bool value) const;
        [[nodiscard]] auto PublishedPrivatePayload() const;
        auto PublishedPrivatePayload(Windows::Storage::Streams::IBuffer const& value) const;
        [[nodiscard]] auto MaxPrivatePayloadSize() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto DeviceAddress() const;
        [[nodiscard]] auto Metric() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult<D>;
    };
    template <typename D>
    struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult
    {
        [[nodiscard]] auto Status() const;
        [[nodiscard]] auto DeviceAddress() const;
        [[nodiscard]] auto Value() const;
    };
    template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
    {
        template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult<D>;
    };
}
#endif
