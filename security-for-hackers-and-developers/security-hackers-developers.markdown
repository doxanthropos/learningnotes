---
title: Security for Hackers and Developers: Overview
url: https://app.pluralsight.com/library/courses/ /table-of-contents
---

# Introduction

## Four Pillars of AppSec

- Code Auditing
- Fuzzing
- Reverse Engineering
- Exploitation

## Why Bugs happen

### Coding mistakes

- Tight deadlines
- Lack of proper testing

### Imported bugs
- Existing bugs in libraries
-> NPM or PIP or gems
- But do not develop in-house crypto

### Lack of clarity

Confusing API calls
Responsibility gaps!

### Failure to train coders on security issues

- Nobody knows networks

### Design issues

Complex Code
Not thinking about the future (Your prototype will become the product)
Do not assume you are safe with a computer that has security holes, but is not connected to the internet.

Keep it simple!

## Ongoing Process Considerations

### Vulnerability fundamentals

It is important to know about these specific to the program domain, language and ecosystem.

- Security policy
  - Safer APIS
  - Review procedures
- Best practices
  - Pre-audited code patterns

### Design / logic review

- Trust: who do we trust, which programs have access to what
- Algorithms: review the algorithms you use!
- Storing data
- Encryption

### Operational review

- Systems change
  - Privileges and files
  - Process creation

### Static testing

- Automation

Important, but not without its own problems, like a lot of false positives, which will need another process to handle.

### Dynamic security testing

- Fuzzing

### Code review

- Tools
- Techniques

### Release review

- Reverse engineering protection: do we want/need that?
- What to do about exploits? (You need a strategy for dealing with these, before you need it.)
- Must be patchable
  - Obfuscation? Because Hackers will see the patch. 1day attacks.

