# EXOS
Extension (확장)의 뜻을 가진 운영체제입니다. 아키텍쳐는 x64입니다 (x86) 부트로더는 GRUB 2를 사용했습니다
Created by Ramsa
소스 깟다구!!!!!

# 빌드 방법
1. docker run --rm -it -v "%cd%":/root/env exos-buildenv
리눅스와 같이 뜬다.
2. make build-x86_64
3. exit
다시 cmd로
4. qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso
실행!!
추카합니다 당신은 빌드에 성공했습니다!!!
# 만드는 방법
필요한것 : Docker, VSCode
1. Docker 디스크 만들기
2. docker build buildenv -t exos-buildenv
3. docker run --rm -it -v "%cd%":/root/env exos-buildenv (이 명령어 치면 리눅스 같이 뜹니다.)
4. 프로젝트 폴더에 복사 (여기 C드라이브에)
5. 빌드 방법 참조
# gcc 빌드 오류시
1. 해더파일 참조 오류일 수 있습니다. 해더파일은 intf 폴더에 삽입해주세요. 그리고 해더파일이름.c는 impl폴더 x86_64에 삽입해주세요.
2. 문법 오류일 수 있습니다.
# nasm 빌드 오류시 +부팅 안돼고 자동으로 다시시작 하는 경우
1. 레지스터 이름이 정확한지 확인한다.
2. mov, add와 같이 정확히 썼는지 확인한다.
3. BIOS 인터럽트 호출을 정확히 썼는지 확인한다.
