#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/GL1/HelloWorldGL1.o \
	${OBJECTDIR}/GL2/Practika1GL2.o \
	${OBJECTDIR}/GL2/Practika2GL2.o \
	${OBJECTDIR}/GL3/Practika1GL3.o \
	${OBJECTDIR}/GL3/Practika2GL3.o \
	${OBJECTDIR}/GL3/Practika3GL3.o \
	${OBJECTDIR}/GL4/Practika1GL4.o \
	${OBJECTDIR}/GL4/Practika2GL4.o \
	${OBJECTDIR}/GL4/Practika3GL4.o \
	${OBJECTDIR}/GL4/Practika4GL4.o \
	${OBJECTDIR}/GL5/Practika1GL5.o \
	${OBJECTDIR}/GL5/Practika2GL5.o \
	${OBJECTDIR}/GL5/Practika3GL5.o \
	${OBJECTDIR}/GL5/Practika4GL5.o \
	${OBJECTDIR}/GL5/Practika6GL5.o \
	${OBJECTDIR}/GL5/Practika7GL5.o \
	${OBJECTDIR}/GL7/Practika1GL7.o \
	${OBJECTDIR}/GL7/Practika2GL7.o \
	${OBJECTDIR}/GL7/Practika3GL7.o \
	${OBJECTDIR}/KrectikiNoliki.o


# C Compiler Flags
CFLAGS=-m64

# CC Compiler Flags
CCFLAGS=-m64
CXXFLAGS=-m64

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__course.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__course.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__course ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/GL1/HelloWorldGL1.o: nbproject/Makefile-${CND_CONF}.mk GL1/HelloWorldGL1.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL1
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL1/HelloWorldGL1.o GL1/HelloWorldGL1.cpp

${OBJECTDIR}/GL2/Practika1GL2.o: nbproject/Makefile-${CND_CONF}.mk GL2/Practika1GL2.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL2
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL2/Practika1GL2.o GL2/Practika1GL2.cpp

${OBJECTDIR}/GL2/Practika2GL2.o: nbproject/Makefile-${CND_CONF}.mk GL2/Practika2GL2.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL2
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL2/Practika2GL2.o GL2/Practika2GL2.cpp

${OBJECTDIR}/GL3/Practika1GL3.o: nbproject/Makefile-${CND_CONF}.mk GL3/Practika1GL3.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL3
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL3/Practika1GL3.o GL3/Practika1GL3.cpp

${OBJECTDIR}/GL3/Practika2GL3.o: nbproject/Makefile-${CND_CONF}.mk GL3/Practika2GL3.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL3
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL3/Practika2GL3.o GL3/Practika2GL3.cpp

${OBJECTDIR}/GL3/Practika3GL3.o: nbproject/Makefile-${CND_CONF}.mk GL3/Practika3GL3.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL3
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL3/Practika3GL3.o GL3/Practika3GL3.cpp

${OBJECTDIR}/GL4/Practika1GL4.o: nbproject/Makefile-${CND_CONF}.mk GL4/Practika1GL4.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL4
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL4/Practika1GL4.o GL4/Practika1GL4.cpp

${OBJECTDIR}/GL4/Practika2GL4.o: nbproject/Makefile-${CND_CONF}.mk GL4/Practika2GL4.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL4
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL4/Practika2GL4.o GL4/Practika2GL4.cpp

${OBJECTDIR}/GL4/Practika3GL4.o: nbproject/Makefile-${CND_CONF}.mk GL4/Practika3GL4.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL4
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL4/Practika3GL4.o GL4/Practika3GL4.cpp

${OBJECTDIR}/GL4/Practika4GL4.o: nbproject/Makefile-${CND_CONF}.mk GL4/Practika4GL4.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL4
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL4/Practika4GL4.o GL4/Practika4GL4.cpp

${OBJECTDIR}/GL5/Practika1GL5.o: nbproject/Makefile-${CND_CONF}.mk GL5/Practika1GL5.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL5
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL5/Practika1GL5.o GL5/Practika1GL5.cpp

${OBJECTDIR}/GL5/Practika2GL5.o: nbproject/Makefile-${CND_CONF}.mk GL5/Practika2GL5.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL5
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL5/Practika2GL5.o GL5/Practika2GL5.cpp

${OBJECTDIR}/GL5/Practika3GL5.o: nbproject/Makefile-${CND_CONF}.mk GL5/Practika3GL5.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL5
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL5/Practika3GL5.o GL5/Practika3GL5.cpp

${OBJECTDIR}/GL5/Practika4GL5.o: nbproject/Makefile-${CND_CONF}.mk GL5/Practika4GL5.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL5
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL5/Practika4GL5.o GL5/Practika4GL5.cpp

${OBJECTDIR}/GL5/Practika6GL5.o: nbproject/Makefile-${CND_CONF}.mk GL5/Practika6GL5.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL5
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL5/Practika6GL5.o GL5/Practika6GL5.cpp

${OBJECTDIR}/GL5/Practika7GL5.o: nbproject/Makefile-${CND_CONF}.mk GL5/Practika7GL5.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL5
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL5/Practika7GL5.o GL5/Practika7GL5.cpp

${OBJECTDIR}/GL7/Practika1GL7.o: nbproject/Makefile-${CND_CONF}.mk GL7/Practika1GL7.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL7
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL7/Practika1GL7.o GL7/Practika1GL7.cpp

${OBJECTDIR}/GL7/Practika2GL7.o: nbproject/Makefile-${CND_CONF}.mk GL7/Practika2GL7.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL7
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL7/Practika2GL7.o GL7/Practika2GL7.cpp

${OBJECTDIR}/GL7/Practika3GL7.o: nbproject/Makefile-${CND_CONF}.mk GL7/Practika3GL7.cpp 
	${MKDIR} -p ${OBJECTDIR}/GL7
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GL7/Practika3GL7.o GL7/Practika3GL7.cpp

${OBJECTDIR}/KrectikiNoliki.o: nbproject/Makefile-${CND_CONF}.mk KrectikiNoliki.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Wall -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/KrectikiNoliki.o KrectikiNoliki.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/c__course.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
