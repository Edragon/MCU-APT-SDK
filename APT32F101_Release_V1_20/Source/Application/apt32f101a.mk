##
## Auto Generated makefile by CDK
## Do not modify this file, and any manual changes will be erased!!!   
##
## BuildSet
ProjectName            :=apt32f101a
ConfigurationName      :=BuildSet
WorkspacePath          := D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Workspace/APT32F101_Release_V1_20/
ProjectPath            := D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/
IntermediateDirectory  :=Obj
OutDir                 := $(IntermediateDirectory)
User                   :=Clutch
Date                   :=21/11/2017
CDKPath                :=C:/Program Files (x86)/C-Sky/C-Sky Development Kit
LinkerName             :=csky-abiv2-elf-gcc
LinkerNameoption       :=
SIZE                   :=csky-abiv2-elf-size
CHECKSUM               :=crc32
SharedObjectLinkerName :=
ObjectSuffix           :=.o
DependSuffix           :=.d
PreprocessSuffix       :=.i
DisassemSuffix         :=.asm
IHexSuffix             :=.ihex
ExeSuffix              :=.elf
LibSuffix              :=.a
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
UnPreprocessorSwitch   :=-U
SourceSwitch           :=-c 
ObjdumpSwitch          :=-S
ObjcopySwitch          :=-O ihex
OutputFile             :=APT32F101_Release
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="apt32f101a.txt"
MakeDirCommand         :=mkdir
LinkOptions            := -mcpu=ck802  -nostartfiles -Wl,--gc-sections  -T"$(ProjectPath)/ckcpu.ld"
IncludeCPath           := $(IncludeSwitch)"$(ProjectPath)" $(IncludeSwitch)"$(ProjectPath)/include" 
IncludeAPath           := $(IncludeSwitch)"$(ProjectPath)" $(IncludeSwitch)"$(ProjectPath)include" 
Libs                   := 
ArLibs                 :=  
LibPath                :=

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := csky-abiv2-elf-ar rcu
CXX      := csky-abiv2-elf-g++
CC       := csky-abiv2-elf-gcc
AS       := csky-abiv2-elf-gcc
OBJDUMP  := csky-abiv2-elf-objdump
OBJCOPY  := csky-abiv2-elf-objcopy
CXXFLAGS := -mcpu=ck802    -O2  -g3  -Wall -mistack 
CFLAGS   := -mcpu=ck802    -O2  -g3  -Wall -mistack 
ASFLAGS  := -mcpu=ck802    -Wa,--gdwarf2    


Objects0=$(IntermediateDirectory)/arch_crt0$(ObjectSuffix) $(IntermediateDirectory)/arch_apt32f101_mem_init$(ObjectSuffix) $(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/apt32f101_initial$(ObjectSuffix) $(IntermediateDirectory)/apt32f101_interrupt$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_adc$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_counta$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_gpio$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_gtc$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_i2c$(ObjectSuffix) \
	$(IntermediateDirectory)/FWlib_apt32f101_led$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_syscon$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_uart$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_ifc$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_ck802$(ObjectSuffix) $(IntermediateDirectory)/FWlib_apt32f101_coret$(ObjectSuffix) $(IntermediateDirectory)/__rt_entry$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PostBuild MakeIntermediateDirs
all: $(IntermediateDirectory)/$(OutputFile)

$(IntermediateDirectory)/$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	@echo linking...
	@$(LinkerName) $(OutputSwitch)"$(IntermediateDirectory)/$(OutputFile)$(ExeSuffix)" $(LinkerNameoption) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)
	@echo generating hex file...
	@$(OBJCOPY) $(ObjcopySwitch) "$(ProjectPath)/$(IntermediateDirectory)/$(OutputFile)$(ExeSuffix)"  "$(ProjectPath)/Lst/$(OutputFile)$(IHexSuffix)" 
	@echo size of target:
	@$(SIZE) "$(ProjectPath)/$(IntermediateDirectory)/$(OutputFile)$(ExeSuffix)" 
	@echo -n "checksum value of target:  "
	@$(CHECKSUM) "$(ProjectPath)/$(IntermediateDirectory)/$(OutputFile)$(ExeSuffix)" 
	
MakeIntermediateDirs:
	@test -d Obj || $(MakeDirCommand) Obj

	@test -d Lst || $(MakeDirCommand) Lst

$(IntermediateDirectory)/.d:
	@test -d Obj || $(MakeDirCommand) Obj
	@test -d Lst || $(MakeDirCommand) Lst


PreBuild:


##
## Objects
##
$(IntermediateDirectory)/arch_crt0$(ObjectSuffix): arch/crt0.S  
	@echo assembling crt0.S...
	@$(AS) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/arch/crt0.S" $(ASFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arch_crt0$(ObjectSuffix) $(IncludeAPath)
	@$(CC) $(CFLAGS)$(IncludeAPath) -MG -MP -MT$(IntermediateDirectory)/arch_crt0$(ObjectSuffix) -MF$(IntermediateDirectory)/arch_crt0$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/arch/crt0.S"

Lst/arch_crt0$(PreprocessSuffix): arch/crt0.S
	@echo generating preprocess file of crt0.S...
	@$(CC) $(CFLAGS)$(IncludeAPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/arch_crt0$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/arch/crt0.S"

$(IntermediateDirectory)/arch_apt32f101_mem_init$(ObjectSuffix): arch/apt32f101_mem_init.c  
	@echo compiling apt32f101_mem_init.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/arch/apt32f101_mem_init.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/arch_apt32f101_mem_init$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/arch_apt32f101_mem_init$(ObjectSuffix) -MF$(IntermediateDirectory)/arch_apt32f101_mem_init$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/arch/apt32f101_mem_init.c"

Lst/arch_apt32f101_mem_init$(PreprocessSuffix): arch/apt32f101_mem_init.c
	@echo generating preprocess file of apt32f101_mem_init.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/arch_apt32f101_mem_init$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/arch/apt32f101_mem_init.c"

$(IntermediateDirectory)/main$(ObjectSuffix): main.c  
	@echo compiling main.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/main.c"

Lst/main$(PreprocessSuffix): main.c
	@echo generating preprocess file of main.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/main$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/main.c"

$(IntermediateDirectory)/apt32f101_initial$(ObjectSuffix): apt32f101_initial.c  
	@echo compiling apt32f101_initial.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/apt32f101_initial.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/apt32f101_initial$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/apt32f101_initial$(ObjectSuffix) -MF$(IntermediateDirectory)/apt32f101_initial$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/apt32f101_initial.c"

Lst/apt32f101_initial$(PreprocessSuffix): apt32f101_initial.c
	@echo generating preprocess file of apt32f101_initial.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/apt32f101_initial$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/apt32f101_initial.c"

$(IntermediateDirectory)/apt32f101_interrupt$(ObjectSuffix): apt32f101_interrupt.c  
	@echo compiling apt32f101_interrupt.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/apt32f101_interrupt.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/apt32f101_interrupt$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/apt32f101_interrupt$(ObjectSuffix) -MF$(IntermediateDirectory)/apt32f101_interrupt$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/apt32f101_interrupt.c"

Lst/apt32f101_interrupt$(PreprocessSuffix): apt32f101_interrupt.c
	@echo generating preprocess file of apt32f101_interrupt.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/apt32f101_interrupt$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/apt32f101_interrupt.c"

$(IntermediateDirectory)/FWlib_apt32f101_adc$(ObjectSuffix): FWlib/apt32f101_adc.c  
	@echo compiling apt32f101_adc.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_adc.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_adc$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_adc$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_adc$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_adc.c"

Lst/FWlib_apt32f101_adc$(PreprocessSuffix): FWlib/apt32f101_adc.c
	@echo generating preprocess file of apt32f101_adc.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_adc$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_adc.c"

$(IntermediateDirectory)/FWlib_apt32f101_counta$(ObjectSuffix): FWlib/apt32f101_counta.c  
	@echo compiling apt32f101_counta.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_counta.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_counta$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_counta$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_counta$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_counta.c"

Lst/FWlib_apt32f101_counta$(PreprocessSuffix): FWlib/apt32f101_counta.c
	@echo generating preprocess file of apt32f101_counta.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_counta$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_counta.c"

$(IntermediateDirectory)/FWlib_apt32f101_gpio$(ObjectSuffix): FWlib/apt32f101_gpio.c  
	@echo compiling apt32f101_gpio.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_gpio.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_gpio$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_gpio$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_gpio$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_gpio.c"

Lst/FWlib_apt32f101_gpio$(PreprocessSuffix): FWlib/apt32f101_gpio.c
	@echo generating preprocess file of apt32f101_gpio.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_gpio$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_gpio.c"

$(IntermediateDirectory)/FWlib_apt32f101_gtc$(ObjectSuffix): FWlib/apt32f101_gtc.c  
	@echo compiling apt32f101_gtc.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_gtc.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_gtc$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_gtc$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_gtc$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_gtc.c"

Lst/FWlib_apt32f101_gtc$(PreprocessSuffix): FWlib/apt32f101_gtc.c
	@echo generating preprocess file of apt32f101_gtc.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_gtc$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_gtc.c"

$(IntermediateDirectory)/FWlib_apt32f101_i2c$(ObjectSuffix): FWlib/apt32f101_i2c.c  
	@echo compiling apt32f101_i2c.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_i2c.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_i2c$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_i2c$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_i2c$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_i2c.c"

Lst/FWlib_apt32f101_i2c$(PreprocessSuffix): FWlib/apt32f101_i2c.c
	@echo generating preprocess file of apt32f101_i2c.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_i2c$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_i2c.c"

$(IntermediateDirectory)/FWlib_apt32f101_led$(ObjectSuffix): FWlib/apt32f101_led.c  
	@echo compiling apt32f101_led.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_led.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_led$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_led$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_led$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_led.c"

Lst/FWlib_apt32f101_led$(PreprocessSuffix): FWlib/apt32f101_led.c
	@echo generating preprocess file of apt32f101_led.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_led$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_led.c"

$(IntermediateDirectory)/FWlib_apt32f101_syscon$(ObjectSuffix): FWlib/apt32f101_syscon.c  
	@echo compiling apt32f101_syscon.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_syscon.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_syscon$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_syscon$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_syscon$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_syscon.c"

Lst/FWlib_apt32f101_syscon$(PreprocessSuffix): FWlib/apt32f101_syscon.c
	@echo generating preprocess file of apt32f101_syscon.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_syscon$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_syscon.c"

$(IntermediateDirectory)/FWlib_apt32f101_uart$(ObjectSuffix): FWlib/apt32f101_uart.c  
	@echo compiling apt32f101_uart.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_uart.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_uart$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_uart$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_uart$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_uart.c"

Lst/FWlib_apt32f101_uart$(PreprocessSuffix): FWlib/apt32f101_uart.c
	@echo generating preprocess file of apt32f101_uart.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_uart$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_uart.c"

$(IntermediateDirectory)/FWlib_apt32f101_ifc$(ObjectSuffix): FWlib/apt32f101_ifc.c  
	@echo compiling apt32f101_ifc.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_ifc.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_ifc$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_ifc$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_ifc$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_ifc.c"

Lst/FWlib_apt32f101_ifc$(PreprocessSuffix): FWlib/apt32f101_ifc.c
	@echo generating preprocess file of apt32f101_ifc.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_ifc$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_ifc.c"

$(IntermediateDirectory)/FWlib_apt32f101$(ObjectSuffix): FWlib/apt32f101.c  
	@echo compiling apt32f101.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101.c"

Lst/FWlib_apt32f101$(PreprocessSuffix): FWlib/apt32f101.c
	@echo generating preprocess file of apt32f101.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101.c"

$(IntermediateDirectory)/FWlib_apt32f101_ck802$(ObjectSuffix): FWlib/apt32f101_ck802.c  
	@echo compiling apt32f101_ck802.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_ck802.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_ck802$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_ck802$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_ck802$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_ck802.c"

Lst/FWlib_apt32f101_ck802$(PreprocessSuffix): FWlib/apt32f101_ck802.c
	@echo generating preprocess file of apt32f101_ck802.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_ck802$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_ck802.c"

$(IntermediateDirectory)/FWlib_apt32f101_coret$(ObjectSuffix): FWlib/apt32f101_coret.c  
	@echo compiling apt32f101_coret.c...
	@$(CC) $(SourceSwitch) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_coret.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FWlib_apt32f101_coret$(ObjectSuffix) $(IncludeCPath)
	@$(CC) $(CFLAGS)$(IncludeCPath) -MG -MP -MT$(IntermediateDirectory)/FWlib_apt32f101_coret$(ObjectSuffix) -MF$(IntermediateDirectory)/FWlib_apt32f101_coret$(DependSuffix) -MM "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_coret.c"

Lst/FWlib_apt32f101_coret$(PreprocessSuffix): FWlib/apt32f101_coret.c
	@echo generating preprocess file of apt32f101_coret.c...
	@$(CC) $(CFLAGS)$(IncludeCPath) $(PreprocessOnlySwitch) $(OutputSwitch) Lst/FWlib_apt32f101_coret$(PreprocessSuffix) "D:/Project/MCU/APT_lib/APT32F101/Release Version/APT32F101_Release_V1_20/Source/Application/FWlib/apt32f101_coret.c"


$(IntermediateDirectory)/__rt_entry$(ObjectSuffix): $(IntermediateDirectory)/__rt_entry$(DependSuffix)
	@$(AS) $(SourceSwitch) "$(ProjectPath)/$(IntermediateDirectory)/__rt_entry.S" $(ASFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/__rt_entry$(ObjectSuffix) $(IncludeAPath)
	@rm -f $(IntermediateDirectory)/__rt_entry.S
$(IntermediateDirectory)/__rt_entry$(DependSuffix):
	@$(CC) $(CFLAGS)$(IncludeAPath) -MG -MP -MT$(IntermediateDirectory)/__rt_entry$(ObjectSuffix) -MF$(IntermediateDirectory)/__rt_entry$(DependSuffix) -MM "$(ProjectPath)/$(IntermediateDirectory)/__rt_entry.S"

-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	@echo Cleaning target...
	@rm -rf $(IntermediateDirectory)/ Lst/

clean_internal:
	@rm -rf $(IntermediateDirectory)/*.o $(IntermediateDirectory)/.d $(IntermediateDirectory)/*.d $(IntermediateDirectory)/*.a $(IntermediateDirectory)/*.elf Lst/

