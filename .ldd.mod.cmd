savedcmd_/home/ubuntu/ldd/ldd_smp_expls/ldd.mod := printf '%s\n'   ldd.o | awk '!x[$$0]++ { print("/home/ubuntu/ldd/ldd_smp_expls/"$$0) }' > /home/ubuntu/ldd/ldd_smp_expls/ldd.mod
