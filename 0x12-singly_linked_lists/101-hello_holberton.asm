          global    main
          extern    printf
main:
	  xor   edi, edi
	  xor   eax, eax
	  mov   edi, message
	  call  printf
	  mov 	eax, 0
	  ret
	  exit
message: db `Hello, Holberton\n`,0
