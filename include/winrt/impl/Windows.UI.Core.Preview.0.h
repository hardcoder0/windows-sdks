// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Core_Preview_0_H
#define WINRT_Windows_UI_Core_Preview_0_H
namespace winrt::Windows::Foundation
{
    struct Deferral;
    template <typename T> struct EventHandler;
    struct EventRegistrationToken;
}
namespace winrt::Windows::UI::WindowManagement
{
    struct AppWindow;
}
namespace winrt::Windows::UI::Core::Preview
{
    struct ICoreAppWindowPreview;
    struct ICoreAppWindowPreviewStatics;
    struct ISystemNavigationCloseRequestedPreviewEventArgs;
    struct ISystemNavigationManagerPreview;
    struct ISystemNavigationManagerPreviewStatics;
    struct CoreAppWindowPreview;
    struct SystemNavigationCloseRequestedPreviewEventArgs;
    struct SystemNavigationManagerPreview;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Core::Preview::ICoreAppWindowPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::ICoreAppWindowPreviewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Core::Preview::CoreAppWindowPreview>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Core::Preview::SystemNavigationManagerPreview>
    {
        using type = class_category;
    };
    template <> struct name<Windows::UI::Core::Preview::ICoreAppWindowPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.ICoreAppWindowPreview" };
    };
    template <> struct name<Windows::UI::Core::Preview::ICoreAppWindowPreviewStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.ICoreAppWindowPreviewStatics" };
    };
    template <> struct name<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.ISystemNavigationCloseRequestedPreviewEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.ISystemNavigationManagerPreview" };
    };
    template <> struct name<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.ISystemNavigationManagerPreviewStatics" };
    };
    template <> struct name<Windows::UI::Core::Preview::CoreAppWindowPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.CoreAppWindowPreview" };
    };
    template <> struct name<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.SystemNavigationCloseRequestedPreviewEventArgs" };
    };
    template <> struct name<Windows::UI::Core::Preview::SystemNavigationManagerPreview>
    {
        static constexpr auto & value{ L"Windows.UI.Core.Preview.SystemNavigationManagerPreview" };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::ICoreAppWindowPreview>
    {
        static constexpr guid value{ 0xA4F6E665,0x365E,0x5FDE,{ 0x87,0xA5,0x95,0x43,0xC3,0xA1,0x5A,0xA8 } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::ICoreAppWindowPreviewStatics>
    {
        static constexpr guid value{ 0x33AC21BE,0x423B,0x5DB6,{ 0x8A,0x8E,0x4D,0xC8,0x73,0x53,0xB7,0x5B } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        static constexpr guid value{ 0x83D00DE1,0xCBE5,0x4F31,{ 0x84,0x14,0x36,0x1D,0xA0,0x46,0x51,0x8F } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
    {
        static constexpr guid value{ 0xEC5F0488,0x6425,0x4777,{ 0xA5,0x36,0xCB,0x56,0x34,0x42,0x7F,0x0D } };
    };
    template <> struct guid_storage<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
    {
        static constexpr guid value{ 0x0E971360,0xDF74,0x4BCE,{ 0x84,0xCB,0xBD,0x11,0x81,0xAC,0x0A,0x71 } };
    };
    template <> struct default_interface<Windows::UI::Core::Preview::CoreAppWindowPreview>
    {
        using type = Windows::UI::Core::Preview::ICoreAppWindowPreview;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs>
    {
        using type = Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs;
    };
    template <> struct default_interface<Windows::UI::Core::Preview::SystemNavigationManagerPreview>
    {
        using type = Windows::UI::Core::Preview::ISystemNavigationManagerPreview;
    };
    template <> struct abi<Windows::UI::Core::Preview::ICoreAppWindowPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::ICoreAppWindowPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetIdFromWindow(void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CloseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CloseRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_ICoreAppWindowPreview
    {
    };
    template <> struct consume<Windows::UI::Core::Preview::ICoreAppWindowPreview>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_ICoreAppWindowPreview<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_ICoreAppWindowPreviewStatics
    {
        auto GetIdFromWindow(Windows::UI::WindowManagement::AppWindow const& window) const;
    };
    template <> struct consume<Windows::UI::Core::Preview::ICoreAppWindowPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_ICoreAppWindowPreviewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs
    {
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview
    {
        auto CloseRequested(Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const& handler) const;
        using CloseRequested_revoker = impl::event_revoker<Windows::UI::Core::Preview::ISystemNavigationManagerPreview, &impl::abi_t<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>::remove_CloseRequested>;
        CloseRequested_revoker CloseRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const& handler) const;
        auto CloseRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreviewStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreviewStatics<D>;
    };
}
#endif
