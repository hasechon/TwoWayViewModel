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

    void CheckBoxViewModel::UpdateText() {

        if (is_checked_) {
            text_ = L"Checked!";
        }
        else
        {
            text_ = L"Unchecked...";
        }

        property_changed_(*this, Data::PropertyChangedEventArgs{ L"Text" });
        return;
    }

    winrt::event_token CheckBoxViewModel::PropertyChanged(Data::PropertyChangedEventHandler const& handler) {
        return property_changed_.add(handler);
    }

    void CheckBoxViewModel::PropertyChanged(winrt::event_token const& token) noexcept {
        property_changed_.remove(token);
    }
}
