When testing for a deadlock in my original program's design, I noticed that a deadlock would occure after at most 3 seconds, so to test if the deadlock was resolved, I would run the program for 10 seconds, then 20, and finally 30, and see if the program would deadlock again during that time period.

As for diagnosing the deadlock, I tried playing around with the granularity of what I was using the mutex to lock, since I knew it was the only part of my code that would cause a deadlock.
So I noticed I had written my code in such a way that each Country objects reads/writes it's own data in defined sections, so instead of using a single mutex to lock down the entire chain of execution, I instead opted to use the mutex to lock a section in which data was being read/wrote, and unlock once done, even reusing the mutex later in the case of the `send_request` method.