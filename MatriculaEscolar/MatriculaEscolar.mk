##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=MatriculaEscolar
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\ledri\Desktop\Prog2"
ProjectPath            := "C:\Users\ledri\Desktop\Prog2\MatriculaEscolar\MatriculaEscolar"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ledri
Date                   :=01/05/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
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
ObjectsFileList        :="MatriculaEscolar.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Endereco.cpp$(ObjectSuffix) $(IntermediateDirectory)/Professor.cpp$(ObjectSuffix) $(IntermediateDirectory)/Secretario.cpp$(ObjectSuffix) $(IntermediateDirectory)/Aluno.cpp$(ObjectSuffix) $(IntermediateDirectory)/Disciplinas.cpp$(ObjectSuffix) $(IntermediateDirectory)/Alunos.cpp$(ObjectSuffix) $(IntermediateDirectory)/Professores.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/AlunoGraduando.cpp$(ObjectSuffix) $(IntermediateDirectory)/AlunoGraduado.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix): Usuario.cpp $(IntermediateDirectory)/Usuario.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Usuario.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Usuario.cpp$(DependSuffix): Usuario.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Usuario.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Usuario.cpp$(DependSuffix) -MM "Usuario.cpp"

$(IntermediateDirectory)/Usuario.cpp$(PreprocessSuffix): Usuario.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Usuario.cpp$(PreprocessSuffix) "Usuario.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/Endereco.cpp$(ObjectSuffix): Endereco.cpp $(IntermediateDirectory)/Endereco.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Endereco.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Endereco.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Endereco.cpp$(DependSuffix): Endereco.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Endereco.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Endereco.cpp$(DependSuffix) -MM "Endereco.cpp"

$(IntermediateDirectory)/Endereco.cpp$(PreprocessSuffix): Endereco.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Endereco.cpp$(PreprocessSuffix) "Endereco.cpp"

$(IntermediateDirectory)/Professor.cpp$(ObjectSuffix): Professor.cpp $(IntermediateDirectory)/Professor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Professor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Professor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Professor.cpp$(DependSuffix): Professor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Professor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Professor.cpp$(DependSuffix) -MM "Professor.cpp"

$(IntermediateDirectory)/Professor.cpp$(PreprocessSuffix): Professor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Professor.cpp$(PreprocessSuffix) "Professor.cpp"

$(IntermediateDirectory)/Secretario.cpp$(ObjectSuffix): Secretario.cpp $(IntermediateDirectory)/Secretario.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Secretario.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Secretario.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Secretario.cpp$(DependSuffix): Secretario.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Secretario.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Secretario.cpp$(DependSuffix) -MM "Secretario.cpp"

$(IntermediateDirectory)/Secretario.cpp$(PreprocessSuffix): Secretario.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Secretario.cpp$(PreprocessSuffix) "Secretario.cpp"

$(IntermediateDirectory)/Aluno.cpp$(ObjectSuffix): Aluno.cpp $(IntermediateDirectory)/Aluno.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Aluno.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Aluno.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Aluno.cpp$(DependSuffix): Aluno.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Aluno.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Aluno.cpp$(DependSuffix) -MM "Aluno.cpp"

$(IntermediateDirectory)/Aluno.cpp$(PreprocessSuffix): Aluno.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Aluno.cpp$(PreprocessSuffix) "Aluno.cpp"

$(IntermediateDirectory)/Disciplinas.cpp$(ObjectSuffix): Disciplinas.cpp $(IntermediateDirectory)/Disciplinas.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Disciplinas.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Disciplinas.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Disciplinas.cpp$(DependSuffix): Disciplinas.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Disciplinas.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Disciplinas.cpp$(DependSuffix) -MM "Disciplinas.cpp"

$(IntermediateDirectory)/Disciplinas.cpp$(PreprocessSuffix): Disciplinas.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Disciplinas.cpp$(PreprocessSuffix) "Disciplinas.cpp"

$(IntermediateDirectory)/Alunos.cpp$(ObjectSuffix): Alunos.cpp $(IntermediateDirectory)/Alunos.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Alunos.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Alunos.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Alunos.cpp$(DependSuffix): Alunos.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Alunos.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Alunos.cpp$(DependSuffix) -MM "Alunos.cpp"

$(IntermediateDirectory)/Alunos.cpp$(PreprocessSuffix): Alunos.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Alunos.cpp$(PreprocessSuffix) "Alunos.cpp"

$(IntermediateDirectory)/Professores.cpp$(ObjectSuffix): Professores.cpp $(IntermediateDirectory)/Professores.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/Professores.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Professores.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Professores.cpp$(DependSuffix): Professores.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Professores.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Professores.cpp$(DependSuffix) -MM "Professores.cpp"

$(IntermediateDirectory)/Professores.cpp$(PreprocessSuffix): Professores.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Professores.cpp$(PreprocessSuffix) "Professores.cpp"

$(IntermediateDirectory)/AlunoGraduando.cpp$(ObjectSuffix): AlunoGraduando.cpp $(IntermediateDirectory)/AlunoGraduando.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/AlunoGraduando.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AlunoGraduando.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AlunoGraduando.cpp$(DependSuffix): AlunoGraduando.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/AlunoGraduando.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/AlunoGraduando.cpp$(DependSuffix) -MM "AlunoGraduando.cpp"

$(IntermediateDirectory)/AlunoGraduando.cpp$(PreprocessSuffix): AlunoGraduando.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AlunoGraduando.cpp$(PreprocessSuffix) "AlunoGraduando.cpp"

$(IntermediateDirectory)/AlunoGraduado.cpp$(ObjectSuffix): AlunoGraduado.cpp $(IntermediateDirectory)/AlunoGraduado.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ledri/Desktop/Prog2/MatriculaEscolar/MatriculaEscolar/AlunoGraduado.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AlunoGraduado.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AlunoGraduado.cpp$(DependSuffix): AlunoGraduado.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/AlunoGraduado.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/AlunoGraduado.cpp$(DependSuffix) -MM "AlunoGraduado.cpp"

$(IntermediateDirectory)/AlunoGraduado.cpp$(PreprocessSuffix): AlunoGraduado.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AlunoGraduado.cpp$(PreprocessSuffix) "AlunoGraduado.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


