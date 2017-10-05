/* file: minunit.h */
<<<<<<< HEAD
#define mu_assert(message, test) do { if (!(test)) return message; } while (0)
#define mu_run_test(test) do { char *message = test(); tests_run++; \
if (message) return message; } while (0)
extern int tests_run;
=======
#define muAssert(message, test) do { if (!(test)) return message; } while (0)
#define muRunTest(test) do { char *message = test(); testsRun++; \
if (message) return message; } while (0)
extern int testsRun;
>>>>>>> 1c7b23fb994304832e33bdb418ee81d3928b5bb0
