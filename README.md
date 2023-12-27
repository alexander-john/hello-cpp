Global scope extends outside of any braces. It is activated before
main is executed, and deactivated after main is exited. Local scopes,
on the other hand, are delimited by braces. Local scope is activated
when the flow of the program enters it, and deactivated when it leaves
it. Objects in local scope are constructed whenever their definition
is encountered, and destroyed when the scope is exited. Such objects
are also called automatic, or stack objects.
