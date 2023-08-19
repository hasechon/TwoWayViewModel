// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "MainWindow.g.h"
#include "CheckBoxViewModel.xaml.h"

namespace winrt::TwoWayViewModel::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        TwoWayViewModel::CheckBoxViewModel ViewModel();

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);

    private:
        TwoWayViewModel::CheckBoxViewModel view_model_{ nullptr };
    };
}

namespace winrt::TwoWayViewModel::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
