-module(fact).
-export([fact/1,mult/2,convert/2,convert_length/1,find_length/1,fact_alt/1]).

fact(0) ->
	1;

fact(N) when N > 0 -> N * fact(N-1).

fact_alt(1) ->
	1;
fact_alt(N) -> N * fact_alt(N-1).

mult(X,Y) ->
	X*Y.

convert(M,inch) ->
	M / 2.54;

convert(M,centimeter) ->
	M * 2.54.

convert_length({centimeter,X}) ->
	{inch,X/2.54};

convert_length({inch,X}) ->
	{centimeter,X*2.54}.

find_length([]) ->
	0;
find_length([_ | Beta]) ->
	1 + find_length(Beta).
