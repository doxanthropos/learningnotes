## Planning for Data Recovery

### What is Data Recovery?

<blockquote>
Data recovery
The process of trying to restore data after an unexpected event that results in data loss or corruption
</blockquote>

<blockquote>
When an unexpected event occurs, your main objective is to <strong>resume normal operations</strong> as soon as possible, while minimizing the disruption of business functions.
</blockquote>

<blockquote>
The best way to be prepared for a data-loss event is to have a well-thought-out <strong>disaster plan and procedure</strong> in place.
</blockquote>

<blockquote>
Disaster plans should involve <strong>making regular backups</strong> of any and all critical data that's necessary for your ongoing business processes.
</blockquote>

<blockquote>
A <strong>post-mortem</strong> is a way for you to document any problems you discovered along the way, and most importantly, the way you fixed them so you can make sure they don't happen again.
</blockquote>

#### Reading

- [GitLab.com database incident](https://about.gitlab.com/blog/2017/02/01/gitlab-dot-com-database-incident/)

### Backing Up Your Data / Backup Solutions

Tradeoffs between Cloud and on-site

Standard for archive storage is magentic tapes.

<blockquote>
A file transfer utility that's designed to efficiently transfer and synchronize files between locations or computers
</blockquote>

#### Reading

- MS: [Back up and restore your PC](https://support.microsoft.com/en-us/windows/back-up-and-restore-your-pc-ac359b36-7015-4694-de9a-c5eac1ce9d9c)
- Apple: [Back up your Mac with Time Machine](https://support.apple.com/en-us/HT201250)
- rsync: [As a backup utility](https://wiki.archlinux.org/title/rsync#As_a_backup_utility)

### Testing Backups

<blockquote>
Restoration procedures
Should be documented and accessible so that anyone with the right access can restore operations when needed
</blockquote>

Regularly test documentation!

Simulate disaster events to test the disaster recovery!

### Types of Backup

Ways to Perform Regular Backups:

- Full Backup
- Differential Backup
- Regular Incremental Backups

<blockquote>
It's a good practice to perform infrequent full backups, while also doing more frequent differential backups.
</blockquote>

<blockquote>
Redundant Array of Independent Disks (RAID)
A method of taking multiple physical disks and combining them into one large virtual disk
</blockquote>

#### Reading

[Standard RAID levels](https://en.wikipedia.org/wiki/Standard_RAID_levels)

### User Backups

### What's a Disaster Recovery Plan?

<blockquote>
Disaster recovery plan
A collection of documented procedures and plans on how to react and handle an emergency or disaster scenario, from the operational perspective
</blockquote>

<blockquote>
Preventive measures
Any procedures or systems in place that will proactively minimize the impact of a disaster
</blockquote>

<blockquote>
Detection measures
Meant to alert you and your team that a disaster has occurred that can impact operations
</blockquote>

Example aspects:

- Environmental Sensors
- Flood Sensors
- Temp and Humidity Sensors
- Evacuation Procedures

<blockquote>
Corrective or recovery measures
Those enacted after a disaster has occurred
</blockquote>

### Designing a Disaster Recovery Plan

<blockquote>
Risk assessment
Allows you to prioritize certain aspects of the organizations that are more at risk if there's an uforeseen event
</blockquote>

- Perform Risk Assessment
- Determine Backup and Recovery Systems
- Determine Detection & Alert Measures & Test Systems
- Determine recovery measures

Temperature, CPU load, network load and similar measures need to be monitored, to be alerted before a disaster happens.

Testing should not only include the monitoring systems, but also the reactions to them. Alerts should be followed up with appropriate responses.

Disaster recovery dokumentation should be accessible in an emergency scenario, when the typical documentation methods might be offline.

### Post-Mortems

#### Brief Summary

- What the incident was
- How long it lasted
- What the impact was
- How it was fixed

Take care to take into account timezones, when mentioning dates and times.

#### Detailed Timeline



#### Root Causes

What led to the issue?
What can be learned?

#### Resolution and Recovery Efforts

#### Actions to Avoid Same Scenario

It is also good to highlight systems that went well, which documents the effectiveness of the systems in place.


