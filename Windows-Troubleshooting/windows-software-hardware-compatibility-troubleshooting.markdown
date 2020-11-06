# Types of Apps

## 16 bit

Will only be able to run on 32 bit Windows versions, not on 64 bit.
Enable Windows Features -> Legacy Components -> NTVDM (nt Virtual DOS Machine)
Question: how do i recognize 16 bit software, if i do not know that it is?

## Win32 Apps

Are generally able to run on current Windows versions. On 64bit Windows they will be installed in the x86 Programs folder.

## Windows Store "Metro" Apps

Designed for Windows 8 and Windows Phone 7, these will only run on these Windows versions and not be availabl in the Windows Store for other Windows versions.

## Universal Apps

Developed for Windows 8.1 these run on 8.1 and 10, but might stop to do so on 10.

## UWP (Universal Windows Platform Apps)

The current version of Store apps. Are only available on Windows 10 (but including Mobile, Xbox, Hololens and more).

"\*.appx" is the file format for these apps.

Sideloading in Security for Developers.

## Centennial Bridge Apps

"Centennial Bridge" is a repackaging of 32bit and 64bit Apps into Windows Store apps.
This provides additional security as they run in secure containers.
Read more at [developer.microsoft.com/windows/bridges/desktop](https://developer.microsoft.com/en-us/windows/bridges/desktop/)

## PWA (Progressive Web Apps)

Are the future?

See [developers.google.com/web/progressive-web-apps/](https://web.dev/progressive-web-apps/)

## Windows Store for Business

Allows to create a custom Windows Store for an organization.
It is necessary to use Azure AD or Office365.
It is possible to add own UWP, Centennial and PWA apps.

Read more at [docs.microsoft.com/microsoft-store/sign-up-microsoft-store-for-business](https://docs.microsoft.com/en-us/microsoft-store/sign-up-microsoft-store-for-business)

# LTSC

The Long Term Serviceing Channel (LTSC) is an "update" channel for Windows 10 that allows to defer feature releases for up to 10 years.
This will not run any store or office 365 app and should be reserved for mission critical static devices.

# The Software Compatibility Troubleshooter

"Troubleshoot Compatibility" in the right click menu.

# Display Problems

Go to Properties -> Compatibility

