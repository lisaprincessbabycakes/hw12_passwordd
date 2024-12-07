# Hw12_password

When I started working on this code for the Arduino Nano password machine, I felt a uncertainty, because the idea of creating a functional system with a specific sequence of inputs felt challenging, but I knew it would also be a great learning experience.

At first, I focused on breaking the project into smaller, manageable steps. Understanding how to handle multiple inputs like buttons and a potentiometer while ensuring precise logic for the password sequence was my primary goal. Writing the code was both rewarding and frustrating at times. Debugging the logic for validating the sequence was particularly tricky because even a slight misstep in the input order would derail the program. This forced me to think deeply about how to manage arrays and compare input values effectively.

A sequence of 5 steps (the password logic!)
1. Press Button 1.
2. Turn potentiometer to a specific range (e.g., 500–700).
3. Press Button 2.
5. Turn potentiometer to another range (e.g., 800–1023).
6. Press Button 1 again.

 [![Untitled-Artwork-25.png](https://i.postimg.cc/90nG5zcv/Untitled-Artwork-25.png)](https://postimg.cc/jnyWyxwX)

 The most rewarding moment came when the LEDs began signaling success and failure correctly. Seeing the system respond exactly as intended after troubleshooting felt like a major accomplishment. It was also a humbling reminder of how attention to detail—like adding delays for button debouncing or carefully handling the reset logic—can make or break a project.



[![IMG-2255.avif](https://i.postimg.cc/zDtwR2T0/IMG-2255.avif)](https://postimg.cc/s1WGkc6h)

One aspect I found particularly fulfilling was programming the potentiometer. I hadn't fully appreciated how precise analog readings could be and how to incorporate them as part of a password. Testing and calibrating the potentiometer to ensure it worked within the required range was satisfying because it showed me the practical challenges of working with real-world sensors.

