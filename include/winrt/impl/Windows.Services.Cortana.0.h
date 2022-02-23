// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Services_Cortana_0_H
#define WINRT_Windows_Services_Cortana_0_H
namespace winrt::Windows::ApplicationModel::DataTransfer
{
    struct DataPackage;
}
namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
    struct Uri;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Services::Cortana
{
    enum class CortanaPermission : int32_t
    {
        BrowsingHistory = 0,
        Calendar = 1,
        CallHistory = 2,
        Contacts = 3,
        Email = 4,
        InputPersonalization = 5,
        Location = 6,
        Messaging = 7,
        Microphone = 8,
        Personalization = 9,
        PhoneCall = 10,
    };
    enum class CortanaPermissionsChangeResult : int32_t
    {
        Success = 0,
        Unavailable = 1,
        DisabledByPolicy = 2,
    };
    struct ICortanaActionableInsights;
    struct ICortanaActionableInsightsOptions;
    struct ICortanaActionableInsightsStatics;
    struct ICortanaPermissionsManager;
    struct ICortanaPermissionsManagerStatics;
    struct ICortanaSettings;
    struct ICortanaSettingsStatics;
    struct CortanaActionableInsights;
    struct CortanaActionableInsightsOptions;
    struct CortanaPermissionsManager;
    struct CortanaSettings;
}
namespace winrt::impl
{
    template <> struct category<Windows::Services::Cortana::ICortanaActionableInsights>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::ICortanaActionableInsightsOptions>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::ICortanaActionableInsightsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::ICortanaSettings>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Services::Cortana::CortanaActionableInsights>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Cortana::CortanaActionableInsightsOptions>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Cortana::CortanaPermissionsManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Cortana::CortanaSettings>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Services::Cortana::CortanaPermission>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Services::Cortana::CortanaPermissionsChangeResult>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Services::Cortana::ICortanaActionableInsights>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaActionableInsights" };
    };
    template <> struct name<Windows::Services::Cortana::ICortanaActionableInsightsOptions>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaActionableInsightsOptions" };
    };
    template <> struct name<Windows::Services::Cortana::ICortanaActionableInsightsStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaActionableInsightsStatics" };
    };
    template <> struct name<Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaPermissionsManager" };
    };
    template <> struct name<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaPermissionsManagerStatics" };
    };
    template <> struct name<Windows::Services::Cortana::ICortanaSettings>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaSettings" };
    };
    template <> struct name<Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.ICortanaSettingsStatics" };
    };
    template <> struct name<Windows::Services::Cortana::CortanaActionableInsights>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.CortanaActionableInsights" };
    };
    template <> struct name<Windows::Services::Cortana::CortanaActionableInsightsOptions>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.CortanaActionableInsightsOptions" };
    };
    template <> struct name<Windows::Services::Cortana::CortanaPermissionsManager>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermissionsManager" };
    };
    template <> struct name<Windows::Services::Cortana::CortanaSettings>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.CortanaSettings" };
    };
    template <> struct name<Windows::Services::Cortana::CortanaPermission>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermission" };
    };
    template <> struct name<Windows::Services::Cortana::CortanaPermissionsChangeResult>
    {
        static constexpr auto & value{ L"Windows.Services.Cortana.CortanaPermissionsChangeResult" };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaActionableInsights>
    {
        static constexpr guid value{ 0x951EC6B1,0xFC83,0x586D,{ 0x8B,0x84,0x24,0x52,0xC8,0x98,0x16,0x25 } };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaActionableInsightsOptions>
    {
        static constexpr guid value{ 0xAAC2BBCF,0x9782,0x5420,{ 0xB8,0x1E,0x7A,0xE5,0x6A,0xF3,0x18,0x15 } };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaActionableInsightsStatics>
    {
        static constexpr guid value{ 0xB5DED412,0x9D2F,0x5CB5,{ 0x9B,0x05,0x35,0x6A,0x0B,0x83,0x6C,0x10 } };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        static constexpr guid value{ 0x191330E0,0x8695,0x438A,{ 0x95,0x45,0x3D,0xA4,0xE8,0x22,0xDD,0xB4 } };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        static constexpr guid value{ 0x76B1E67A,0xB045,0x4414,{ 0x9D,0x6D,0x2A,0xD3,0xA5,0xFE,0x3A,0x7E } };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaSettings>
    {
        static constexpr guid value{ 0x54D571A7,0x8062,0x40F4,{ 0xAB,0xE7,0xDE,0xDF,0xD6,0x97,0xB0,0x19 } };
    };
    template <> struct guid_storage<Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        static constexpr guid value{ 0x8B2CCD7E,0x2EC0,0x446D,{ 0x92,0x85,0x33,0xF0,0x7C,0xE8,0xAC,0x04 } };
    };
    template <> struct default_interface<Windows::Services::Cortana::CortanaActionableInsights>
    {
        using type = Windows::Services::Cortana::ICortanaActionableInsights;
    };
    template <> struct default_interface<Windows::Services::Cortana::CortanaActionableInsightsOptions>
    {
        using type = Windows::Services::Cortana::ICortanaActionableInsightsOptions;
    };
    template <> struct default_interface<Windows::Services::Cortana::CortanaPermissionsManager>
    {
        using type = Windows::Services::Cortana::ICortanaPermissionsManager;
    };
    template <> struct default_interface<Windows::Services::Cortana::CortanaSettings>
    {
        using type = Windows::Services::Cortana::ICortanaSettings;
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaActionableInsights>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_User(void**) noexcept = 0;
            virtual int32_t __stdcall IsAvailableAsync(void**) noexcept = 0;
            virtual int32_t __stdcall ShowInsightsForImageAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowInsightsForImageWithOptionsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowInsightsForTextAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowInsightsForTextWithOptionsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowInsightsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ShowInsightsWithOptionsAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaActionableInsightsOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentSourceWebLink(void**) noexcept = 0;
            virtual int32_t __stdcall put_ContentSourceWebLink(void*) noexcept = 0;
            virtual int32_t __stdcall get_SurroundingText(void**) noexcept = 0;
            virtual int32_t __stdcall put_SurroundingText(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaActionableInsightsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
            virtual int32_t __stdcall GetForUser(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall ArePermissionsGrantedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GrantPermissionsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RevokePermissionsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HasUserConsentToVoiceActivation(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsVoiceActivationEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsVoiceActivationEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaActionableInsights
    {
        [[nodiscard]] auto User() const;
        auto IsAvailableAsync() const;
        auto ShowInsightsForImageAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& imageStream) const;
        auto ShowInsightsForImageAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& imageStream, Windows::Services::Cortana::CortanaActionableInsightsOptions const& options) const;
        auto ShowInsightsForTextAsync(param::hstring const& text) const;
        auto ShowInsightsForTextAsync(param::hstring const& text, Windows::Services::Cortana::CortanaActionableInsightsOptions const& options) const;
        auto ShowInsightsAsync(Windows::ApplicationModel::DataTransfer::DataPackage const& datapackage) const;
        auto ShowInsightsAsync(Windows::ApplicationModel::DataTransfer::DataPackage const& datapackage, Windows::Services::Cortana::CortanaActionableInsightsOptions const& options) const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaActionableInsights>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaActionableInsights<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaActionableInsightsOptions
    {
        [[nodiscard]] auto ContentSourceWebLink() const;
        auto ContentSourceWebLink(Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto SurroundingText() const;
        auto SurroundingText(param::hstring const& value) const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaActionableInsightsOptions>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaActionableInsightsOptions<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaActionableInsightsStatics
    {
        auto GetDefault() const;
        auto GetForUser(Windows::System::User const& user) const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaActionableInsightsStatics>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaActionableInsightsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaPermissionsManager
    {
        auto IsSupported() const;
        auto ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
        auto GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
        auto RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaPermissionsManager>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaSettings
    {
        [[nodiscard]] auto HasUserConsentToVoiceActivation() const;
        [[nodiscard]] auto IsVoiceActivationEnabled() const;
        auto IsVoiceActivationEnabled(bool value) const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaSettings>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaSettings<D>;
    };
    template <typename D>
    struct consume_Windows_Services_Cortana_ICortanaSettingsStatics
    {
        auto IsSupported() const;
        auto GetDefault() const;
    };
    template <> struct consume<Windows::Services::Cortana::ICortanaSettingsStatics>
    {
        template <typename D> using type = consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>;
    };
}
#endif