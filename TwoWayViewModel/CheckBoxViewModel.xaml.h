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

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::TwoWayViewModel::factory_implementation
{
    struct CheckBoxViewModel : CheckBoxViewModelT<CheckBoxViewModel, implementation::CheckBoxViewModel>
    {
    };
}
