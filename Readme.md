# Encrption and Security Syestem


1. An Attribute Authority (AA) who assigns attributes to users, and maintains them in a
database. Any new user who registers in the system is given attributes in the form of
key value pairs. For example, say your organization is FAST; a faculty member in the
Islamabad campus may be given the attributes [campus: Islamabad, designation:
Assistant Professor, current courses: OOP,CNET]. “Campus” is the key and
“Islamabad” is a value in this example. You can pick randomly from a predefined
“attribute universe” to assign to new users.
2. A Key Management Authority (KMA) with the following responsibilities:
a. Generate keys for new users based on their attributes and a secret that is
unique to each user.
b. Maintain a record of registered users, their attributes (assigned by AA) and
their keys (which it has generated).
c. Revoke access when required (e.g. when a producer specifies that a certain
consumer or all consumers holding a specific attribute should no longer be
given access to a particular document, it should be restricted immediately).
Thinking of a way to implement revocation is part of your assignment. The
revocation may be both attribute-level (e.g. revoke access of all users having
the attribute “department: management”) or consumer-level (e.g. revoke
access of a certain consumer), as requested by a producer.

3. A Storage Service (SS) that writes the generated documents to secure (usually cloud)
storage and retrieves them when requested. Please note that you do not have to
actually use a cloud service – just a module in your program can be a “pretend” cloud
service; the files will simply be stored on your own machine. Users should be able to
ask the SS to display a list of documents stored in it. Documents should be displayed
as an ID and a short description, e.g. as follows:
1111 Admission Test Instructions
2345 Payroll System Manual
6784 Visiting Lecturer Rates
4. An Encryption/Decryption Service that does the actual encryption and decryption
actions. You should use a library instead of trying to write your own code; there are
several libraries for ABE in different languages. For C++ you can use this one; do look
at this example to see how CP-ABE can be easily implemented within your program.
Feel free to add other helper/administrative modules, e.g. a module to handle login and
registration, another to invoke the encryption or file handling functions etc. In a real system,
these modules would be running in separate servers. To emulate that, your code should have
a clearly modular design, where each module only performs its own specific tasks and
interacts with other modules. You are free to choose your own programming language, but
for example, in C++ these entities would at the least be separate classes.
In your implementation, you will come up with a sample organization to use to demonstrate
your system, for example, a university, a hospital, a local government office etc. Specify an
attribute universe which defines all possible attributes that can be generated within your
organization, e.g. if your organization is a hospital, some of your attributes can be
“department”, “designation”, “specialization” (e.g. if the employee is a doctor), “salary” etc.
