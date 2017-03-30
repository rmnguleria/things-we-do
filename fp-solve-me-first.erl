-module (fp-solve-me-first).
-export ([main/0]).

%% yo add.
solveMeFirst(A,B) ->
	A+B.

%% yo main.
main() ->
	{ok,[A,B]} -> io:fread("","~d~d"),
	