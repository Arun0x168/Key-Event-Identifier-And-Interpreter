# Key Event Identifier And Interpreter
 A simple C++ Key logger by hooking the windows api,Would run on the same thread and would listen to global events as well,Exceptions are not really well handled as this is only a demonstration as to how a tool like this could be made easily,Also Low level Key board hooks are an exception,for eg for hooking the mouse event messages you'll have to inject a dll into the respective exe otherwise CallNextHookEx would fail coz the hooks will need execute in each process's address space inorder to prevent some problems.
