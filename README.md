# EXOS
Extension (확장)의 뜻을 가진 운영체제
Bits = 64bit
BootLoader = asm, GRUB 2
Created by 남지훈
공개안함

# 빌드 방법
1. docker run --rm -it -v "%cd%":/root/env exos-buildenv
리눅스와 같이 뜬다.
2. make build-x86_64
3. exit
다시 cmd로
4. qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso
실행!!
추카합니다 당신은 빌드에 성공했습니다!!!