## What is System Administration?

### Servers revisited

<blockquote>
Server
Software or a machine that provides services to other software or machines.
</blockquote>

Webserver, Mailservers, SSH-Servers

See:

[KVM - Switch](https://en.wikipedia.org/wiki/KVM_switch)

### The Cloud

<blockquote>
Data Center
A facility that stores hundreds, if not thousands of servers
</blockquote>

## System Administration Tasks

### Organizational Policies

#### Questions

- Should users be allowed to install software?
- Should users have complex passwords with certain requirements?
- Should users be allowed to access non-work-related websites, like Facebook?
- If you hand out a company phone to an employee, should you set a device password?

### User and Hardware Provisioning

Hardware Lifecycle Stages:

- Procurement
- Deployment
- Maintenance
- Retirement

### Routine Maintenance


You can never know enough!

## Applying Changes

### With Great Power Comes Great Responsibility

Respect the rights of others.
Don't misuse the admin rights.

Writing out the steps you are going to do, will help not to rush and also document.

Documentation and version management will help prepare for necessary rollbacks.

See:

- [script](http://manpages.ubuntu.com/manpages/bionic/man1/script.1.html) a tool to record terminal interactions in Linux
- [Start-Transcript](https://docs.microsoft.com/en-us/powershell/module/microsoft.powershell.host/start-transcript?view=powershell-6) the same in PowerShell
- [ansi2txt](http://manpages.ubuntu.com/manpages/bionic/man1/ansi2txt.1.html)
- [ansi2html](http://manpages.ubuntu.com/manpages/bionic/man1/ansi2html.1.html)

For graphical sessions see recordMyDesktop, OBS, VLC

### Never Test in Production

<blockquote>
Production
The part of the infrastructure, where a certain service is executed and served to its users
</blockquote>

<blockquote>
Test Environment
A virtual machine running the same configuration as the production environment, but isn't actually serving any users of the service
</blockquote>

<blockquote>
Secondary or stand-by machine
This machine will be exactly the same as a production machine, but won't receive any traffic from actual users until you enable it to do so
</blockquote>

<blockquote>
For even bigger services, when you have lots of servers providing the service, you may want to have canaries
</blockquote>

### Assessing Risk

Document what you do and have a way to revert to the previous state.
How important is the service to the infrastructure, how many users are affected by it?

<blockquote>
In general, the more users your service reaches, the more you'll want to ensure that changes arn't disruptive
</blockquote>

<blockquote>
The more important your service is to your company's operations, the more you'll work to keep the service up
</blockquote>

### Fixing Things the Right Way

<blockquote>
Reproduction Case
Creating a roadmap to retrace the steps to an unexpected outcome
</blockquote>

Questions to answer:

- What steps did you take to get to this point?
- What's the unexpected or bad result?
- What's the expected result?

<blockquote>
Remember: always do this in your test instance, never in production.
</blockquote>

<blockquote>
After applying your fix, retrace the same steps, that took you to the bad experience. If your fix worked, the expected experience should now take place.
</blockquote>


