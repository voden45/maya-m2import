import os

# Create environment
env = Environment()

# Change this to point where your Maya is installed
MayaPath = 'D:\Apps\Maya 2008'
#MayaPath = '/usr/aw/maya'

# Path to Platform SDK
PlatformSDKPath = 'C:\Program Files\Microsoft Platform SDK for Windows Server 2003 R2'

# Compiler parameters
env.Append(CCFLAGS = '-D_WIN32 -D_BOOL /EHsc -DNT_PLUGIN -D_CRT_SECURE_NO_DEPRECATE')
env.Append(CPPPATH = [MayaPath + '/include', PlatformSDKPath + '/include'])
env.Append(LINKFLAGS = '/export:initializePlugin /export:uninitializePlugin')

# Linker parameters
env.Append(LIBPATH = [MayaPath + '/lib', PlatformSDKPath + '/lib'])
env['LIBS'] = Split('OpenMaya Foundation')

# Targets
env.SharedLibrary(target = 'm2import', source = Split('Plugin.cpp Import.cpp'))

env.InstallAs(target = MayaPath + '/bin/plug-ins/m2import.mll', source = 'm2import.dll')
env.Install(dir = MayaPath + '/scripts/others', source = 'm2FileTranslatorOpts.mel')

env.Alias('install', [MayaPath + '/bin/plug-ins', MayaPath + '/scripts/others'])
