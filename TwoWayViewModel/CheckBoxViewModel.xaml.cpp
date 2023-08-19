// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "CheckBoxViewModel.xaml.h"
#if __has_include("CheckBoxViewModel.g.cpp")
#include "CheckBoxViewModel.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::TwoWayViewModel::implementation
{
    CheckBoxViewModel::CheckBoxViewModel()
    {
    }

    int32_t CheckBoxViewModel::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void CheckBoxViewModel::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void CheckBoxViewModel::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
    }
}
