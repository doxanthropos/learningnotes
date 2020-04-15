---
title: Windows 10 Configuring and Managing Applications
description: A course by Mark Wilkins, part of Configuring Windows Devices
---

[Windows 10 Configuring and Managing Applications](https://app.pluralsight.com/library/courses/windows-10-configuring-managing-apps-creators/table-of-contents)

# Course Overview

# Application Compatibility

## Application Compatibility Isssues

Control issues of older applications

- Administrator permissions: Older applications might expect to be able to have administrative permissions. In Windows 10 only the "Trusted Installer" is allowed to have those.
- Full control to Windows folder: Applications might want to have full control of the Windows or the System32 folder.
- HKCU or HKLM: HK Local Machine is where older applications might want to write their configuration, while they should write it to HK Current User. Sometimes it is the other way around so the application has to be installed for every user.
- Some replace DLLs without asking and break some applications in the process.

The Trusted Installer is the programs this is meant to take care of these.

### Windows 10 Compatibility Solutions

- Virtual store for file conflicts: mapping directories that an app wants to access, but is not allowed to into the users Documents folder.
- Virtual store for registry "mis-locations": When the TI does not allow a registry location to be used, these can be mapped to the HKCU locations.
- Troubleshoot compatibilits option on Context menu: in the properties of an exe is a troubleshoot option.
- Program compatibility assistant: automated is part of the Control Panel.
- Run as Administrator: will make an app ask for Administrator rights before it runs. Note: To me this seems to defeat the purpose of the initial rule that apps are not allowed to run as Administrator.
- Compatibility modes.
