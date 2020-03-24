# Directory Services

## Introduction to Directory Services

### What is a Directory Server?

<blockquote>
Directory Server
Contains a lookup service that provides mapping between network resources and their network addresses
</blockquote>

<blockquote>
Replication
The stored directory data can be copied and distributed across a number of distributed servers, but still appear as one, unified datastore for querying and administrating
</blockquote>

<blockquote>
Directory Services
Useful for organizing data and making it searchable for an organization
</blockquote>

Containers are refered to as Organizazional Units (OUs) and contain other containers or objects.

Necessary tasks:

- Setup
- Configuration
- Maintenance

### Implementing Directory Services

#### Open Standards

- Directory Access Protocol (DAP)
- Directory System Protocol (DSP)
- Directory Information Shadowing Protocol (DISP)
- Directory Operational Bindings Management Protocol (DOP)


- x.500 in 1988 - Directory Standard

- Lightweight Directory Access Protocol (LDAP)

#### Implementations

- Active Directory (AD)
- OpenLDAP
- Active Directory Users and Computers (ADUC)

## Centralized Management

### What is centralized management?

<blockquote>
Centralized management
A centralized service that provides instructions to all of the different parts of my IT infrastructure
</blockquote>

<blockquote>
Directory services provide centralized authentication, authorization, and accounting, also known as AAA.
</blockquote>

!["Diagram of the relationship between Identities, Roles, and Resources"](./IdentitiesRolesResources.png)

Role Based Access Control - RBAC

Logon Scripts are an easy way of configuring client devices based on roles.

Read:

- [Role-based access control](https://en.wikipedia.org/wiki/Role-based_access_control)
- [Chef](https://www.chef.io/products/chef-infra/)
- [puppet](https://puppet.com/)
- [MS: What is Configuration Manager?](https://docs.microsoft.com/en-us/configmgr/core/understand/introduction)

## LDAP

### What is LDAP?

<blockquote>
Lightweight Directory Access Protocol (LDAP)
Used to access information in directory services over a network
</blockquote>

- Active Directory
- OpenLDAP

Example of an LDAP entry:

`dn: CN=Devan Sri-Tharan,OU=Sysadmin,DC=example,DC=com`

- dn: Distinguished name
- CN: Common name of the object
- OU: Organizational unit such as a group
- DC: Domain component, the domain example.com is split into the components example and com

[LDAP Data Interchange Format](https://en.wikipedia.org/wiki/LDAP_Data_Interchange_Format)

### What is LDAP Authentication?

!["A visualization of the LDAP Authentication process"](LDAP-Authentication.png)

#### Three ways to authenticate

- Anonymous: No authentication at all
- Simple: Username and password in plaintext
- SASL (Simple Authentication and Security Layer): TLS encrypted, using another authentication method, like Kerberos

<blockquote>
Kerberos
A network authentication protocol that's used to authenticate user identity, secure the transfer of user credentials, and more
</blockquote>



[What Is Kerberos Authentication?](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2003/cc780469(v=ws.10)?redirectedfrom=MSDN)

## Active Directory

### What is Active Directory?

Active Directory Administrative Center (ADAC)

Domain is usually the top node in an AD structure, but Domains are themselves part of a forest. A group of Domains, that can share resources in the same forest.

Domain Controllers (DCs) host a (read-write) replica of the AD database, and GPOs. They serve as DNS service and provide Service Discovery. They provide authentication via Kerberos.

Changes to AD from a DC are usually done in the order they come in. This opens up the possibility of conflicts. For operations where this should not happen at all a single DC will be tasked with these kind of changes, known as Flexible Single-Master Operations (FISMO).

[Managing Flexible Single-Master Operations](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-2000-server/cc961936(v=technet.10)?redirectedfrom=MSDN)

### Managing Active Directory

Domain Admins are the administrators of the complete Domain.

Enterprise Admins are Domain Administrators with the additional right to control the whole forest.

Domain Admin accounts should not be used for all daily tasks, but only for administering AD.

### Managing Active Directory Users and Groups

Managing User Account Lifecycle

Security Account Manager- SAM
 
User SamAccountName

ADAC has as PowerShell history pane that shows everything that is done in ADAC as its PowerShell commmand.

#### Group Types

Security Groups are used to grant or restrict access.

Distribution Groups are used for Email Communication and are not used for access granting.

#### Group Scope

- Domain Local: Used to assign permission to a resource.
- Global: Used to group accounts into a role.
- Universal: Used to group global groups in a forest.

Example:

A researchers group (Global Group) that will use a research share readers group (Domain Local) and a research share writers groups (also Domain Local) to give access to the share destined to use for researchers.

Read:

- [Group scope](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2003/cc755692(v=ws.10)?redirectedfrom=MSDN)
- [What Are Security Principals?](https://docs.microsoft.com/en-us/previous-versions/windows/it-pro/windows-server-2003/cc780957(v=ws.10)?redirectedfrom=MSDN)

