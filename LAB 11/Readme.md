# LAB 11 Linux Hardening
# TASK 1 Complete the Lab Manual provide proof in form of screenshots
![image](https://user-images.githubusercontent.com/123716596/234595553-e4470180-a494-46a1-b646-4ad6b0c68403.png)
![image](https://user-images.githubusercontent.com/123716596/234595730-6341972e-c4a2-4991-88f6-91f9661752b4.png)
![image](https://user-images.githubusercontent.com/123716596/234595899-e7a63cd3-96cd-4767-bf47-887316df66b3.png)
![image](https://user-images.githubusercontent.com/123716596/234596079-d0da41f2-04b4-4680-827c-f34d24f6f554.png)
![image](https://user-images.githubusercontent.com/123716596/234599314-d22563ef-11a4-4d95-88b0-222a099a0bb6.png)
![image](https://user-images.githubusercontent.com/123716596/234599696-9042a370-7647-40bd-9194-36cba0cd5a63.png)
![image](https://user-images.githubusercontent.com/123716596/234599940-b60d8c4e-7196-4161-b7e1-a6199b2e1233.png)
![image](https://user-images.githubusercontent.com/123716596/234600258-e70bad28-8923-4860-bab8-e9109fe97288.png)
![image](https://user-images.githubusercontent.com/123716596/234601959-e1dfc411-f8ba-4d08-98ef-cbb597956e02.png)
![image](https://user-images.githubusercontent.com/123716596/234607388-0a8caf0e-85d4-452b-92a4-93274caec10c.png)
![image](https://user-images.githubusercontent.com/123716596/234608626-13b555a2-775a-4c3f-b6b0-a9b38025313b.png)
![image](https://user-images.githubusercontent.com/123716596/234615649-0f0a89d9-e420-4bf1-a94a-ffdea90b77b7.png)
![image](https://user-images.githubusercontent.com/123716596/234615897-603a7a75-5f43-4f07-8730-2f8a0f38aef1.png)
![image](https://user-images.githubusercontent.com/123716596/234616568-318c1fbe-aacc-4e1f-b68d-f612ec1e4fb2.png)
![image](https://user-images.githubusercontent.com/123716596/234616965-b8fa274d-0642-4f09-b3b7-67583a503d81.png)
![image](https://user-images.githubusercontent.com/123716596/234617210-6d2e8b89-27fa-47f0-bd1b-1054448468e1.png)

# TASK 2  Summarize what the manual was about.
Hardening a Linux system involves implementing a series of security measures to reduce the system's vulnerability to attacks. These measures may include disabling unnecessary services, configuring firewall rules, implementing access controls, and applying security patches and updates.

By hardening your Linux system, you can reduce the risk of unauthorized access, data breaches, and system compromises. This can help protect your sensitive data, prevent system downtime, and maintain the confidentiality, integrity, and availability of your system.

Furthermore, many organizations are required to comply with various regulatory standards, such as the Payment Card Industry Data Security Standard (PCI DSS) or the Health Insurance Portability and Accountability Act (HIPAA). These standards often require the implementation of specific security controls, including system hardening.

In summary, Linux hardening is essential for maintaining a secure and reliable system and complying with regulatory requirements. It helps prevent unauthorized access, data breaches, and system compromises, protecting your sensitive data and maintaining the confidentiality, integrity, and availability of your system.

# TASK 3:
# For any 3 tools describe in detail in you own words 
 3. what they do?
 4. How to affectively use them?
 5. Any short-comings they might have?
 6. Alternatives/Competitors they have?

# JSheilder LINUX HARDENING TOOL
    What does jShielder do?
    jShielder automates the implementation of security best practices for Linux systems. It applies a set of hardening measures to the system, which reduces the risk of unauthorized access, data breaches, and system compromises. The tool also generates a report of the changes made to the system, which can be used for auditing and compliance purposes.

    How to effectively use jShielder?
    To effectively use jShielder, the user should follow the instructions provided by the tool. It is recommended to run the tool with root privileges to ensure that all changes can be made to the system. The user should also review the changes made by the tool and ensure that they do not affect the system's functionality. It is also recommended to regularly run the tool to ensure that the system remains secure.

    Any shortcomings of jShielder?
    One potential shortcoming of jShielder is that it is a Bash script and does not have a graphical user interface. This may make it more difficult for users who are not familiar with the command-line interface to use. Additionally, the tool may not cover all security measures required for specific use cases or regulatory compliance standards. Therefore, it is important to review the measures applied by jShielder and ensure that they meet the specific needs of the user.

    Alternatives/Competitors to jShielder?
    There are several other Linux hardening tools available, such as Lynis, Bastille, and CIS-CAT. These tools provide similar functionality to jShielder and may have additional features, such as graphical user interfaces and integration with other security tools. Users should evaluate the different options available and choose the tool that best meets their specific needs.

# Lynis LINUX HARDENING TOOL
    What does Lynis do?
    Lynis performs a comprehensive security audit of the Linux system, including the kernel, system configuration, software packages, and network services. It checks for common security issues, misconfigurations, vulnerabilities, and potential threats. The tool also provides recommendations for mitigating the identified risks and improving the system's security posture.

    How to effectively use Lynis?
    To effectively use Lynis, the user should first install and configure the tool on the Linux system. The tool can be run using the command line interface with root privileges. The user should review the report generated by Lynis and take appropriate action to address the identified security issues. It is also recommended to regularly run Lynis to ensure that the system remains secure and to stay up to date with security best practices.

    Any shortcomings of Lynis?
    One potential shortcoming of Lynis is that it may generate false positives or miss some security issues, as no security tool can guarantee complete coverage. Additionally, the tool may be complex for novice users or those unfamiliar with the Linux command line interface. Lastly, Lynis may not be suitable for use in some specific use cases or regulatory compliance standards.

    Alternatives/Competitors to Lynis?
    There are several other Linux hardening and security auditing tools available, such as jShielder, CIS-CAT, and Bastille. These tools provide similar functionality to Lynis and may have additional features or specific focus on certain security aspects. Users should evaluate the different options available and choose the tool that best meets their specific needs and use cases.

# OpenSCAP LINUX HARDENING TOOL
 3. what they do?
OpenSCAP provides several security features and capabilities. It includes a library of security policies, configuration profiles, and vulnerability scanners that can be used to assess and remediate security vulnerabilities. It also provides automated compliance checks against industry-standard security benchmarks such as the Common Vulnerability Scoring System (CVSS), Common Configuration Enumeration (CCE), and Security Content Automation Protocol (SCAP).

 4. How to affectively use them?
To effectively use OpenSCAP, you should first install it on your Linux system and configure it according to your security needs. Once installed, you can use it to scan and assess the security posture of your Linux systems. The tool generates reports that identify security vulnerabilities and non-compliant configurations, and provides remediation guidance to fix these issues.

 5. Any short-comings they might have?
One potential shortcoming of OpenSCAP is that it can be complex to configure and use, particularly for inexperienced users. The tool also requires a certain level of technical expertise to understand and interpret the results of security scans and reports.

 6. Alternatives/Competitors they have?
Alternatives or competitors to OpenSCAP include tools such as Lynis, Bastille, and CIS-CAT, as well as commercial solutions such as Tenable Nessus and Qualys Vulnerability Management. These tools offer similar features and functionality, and choosing one over the other may depend on your specific security needs, system environment, and personal preference.
