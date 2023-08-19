// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "CheckBoxViewModel.g.h"

namespace winrt::TwoWayViewModel::implementation
{
    struct CheckBoxViewModel : CheckBoxViewModelT<CheckBoxViewModel>
    {
        CheckBoxViewModel();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        boolean IsChecked() { return is_checked_; };
        void IsChecked(boolean val) { is_checked_ = val; };

        winrt::hstring Text() { return text_; };

        void UpdateText();

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);

        winrt::event_token PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
        boolean is_checked_ = true;
        winrt::hstring text_ = L"default text";
        winrt::event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> property_changed_;
    };
}

namespace winrt::TwoWayViewModel::factory_implementation
{
    struct CheckBoxViewModel : CheckBoxViewModelT<CheckBoxViewModel, implementation::CheckBoxViewModel>
    {
    };
}
