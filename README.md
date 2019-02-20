# git_bisect_practice
A small project with a number of commits.  One causes tests to fail.  Use bisect to track it down

Suppose you discover the failure after cloning the repository.  Looking at the commit log you see that
all tests were passing at hash ee6a476add

% git bisect start
% git bisect bad
% git bisect good ee6a476add

Git will checkout a commit between the last known good and last known bad.  Build and run the tests

% make
% testShape

If the test(s) pass:
   % git bisect good
If the test(s) fail:
   % git bisect bad

Continue this process until you've narrowed it down to the offending commit.
