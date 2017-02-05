##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Modularization
ConfigurationName      :=Debug
WorkspacePath          :=/data/3/soft/devel/c_tutorial_codelite/c_codelite
ProjectPath            :=/data/3/soft/devel/c_tutorial_codelite/c_codelite/Modularization
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=alex-t
Date                   :=05/02/17
CodeLitePath           :=/home/alex-t/.codelite
LinkerName             :=clang++
SharedObjectLinkerName :=clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Modularization.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := clang++
CC       := clang
CXXFLAGS :=  -g -O0 -std=c++14 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := llvm-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Vector.cpp$(ObjectSuffix) $(IntermediateDirectory)/SomeNamespace.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/data/3/soft/devel/c_tutorial_codelite/c_codelite/Modularization/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Vector.cpp$(ObjectSuffix): Vector.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/data/3/soft/devel/c_tutorial_codelite/c_codelite/Modularization/Vector.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Vector.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Vector.cpp$(PreprocessSuffix): Vector.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Vector.cpp$(PreprocessSuffix) Vector.cpp

$(IntermediateDirectory)/SomeNamespace.cpp$(ObjectSuffix): SomeNamespace.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/data/3/soft/devel/c_tutorial_codelite/c_codelite/Modularization/SomeNamespace.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SomeNamespace.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SomeNamespace.cpp$(PreprocessSuffix): SomeNamespace.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SomeNamespace.cpp$(PreprocessSuffix) SomeNamespace.cpp

##
## Clean
##
clean:
	$(RM) -r ./Debug/


