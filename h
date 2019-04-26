[33mcommit d1795ed07c94fb70c92468947cc7867b49661a77[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: wojtekcywinski <wojciech.cywinski@gmail.com>
Date:   Fri Jan 11 21:37:51 2019 +0100

    First Commit

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..9243c63[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32m.gradle[m
[32m+[m[32m/build/[m
[32m+[m[32m!gradle/wrapper/gradle-wrapper.jar[m
[32m+[m
[32m+[m[32m### STS ###[m
[32m+[m[32m.apt_generated[m
[32m+[m[32m.classpath[m
[32m+[m[32m.factorypath[m
[32m+[m[32m.project[m
[32m+[m[32m.settings[m
[32m+[m[32m.springBeans[m
[32m+[m[32m.sts4-cache[m
[32m+[m
[32m+[m[32m### IntelliJ IDEA ###[m
[32m+[m[32m.idea[m
[32m+[m[32m*.iws[m
[32m+[m[32m*.iml[m
[32m+[m[32m*.ipr[m
[32m+[m[32m/out/[m
[32m+[m
[32m+[m[32m### NetBeans ###[m
[32m+[m[32m/nbproject/private/[m
[32m+[m[32m/nbbuild/[m
[32m+[m[32m/dist/[m
[32m+[m[32m/nbdist/[m
[32m+[m[32m/.nb-gradle/[m
\ No newline at end of file[m
[1mdiff --git a/build.gradle b/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..153b220[m
[1m--- /dev/null[m
[1m+++ b/build.gradle[m
[36m@@ -0,0 +1,30 @@[m
[32m+[m[32mbuildscript {[m
[32m+[m[32m    ext {[m
[32m+[m[32m        springBootVersion = '2.1.0.RELEASE'[m
[32m+[m[32m    }[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        mavenCentral()[m
[32m+[m[32m    }[m
[32m+[m[32m    dependencies {[m
[32m+[m[32m        classpath("org.springframework.boot:spring-boot-gradle-plugin:${springBootVersion}")[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mapply plugin: 'java'[m
[32m+[m[32mapply plugin: 'eclipse'[m
[32m+[m[32mapply plugin: 'org.springframework.boot'[m
[32m+[m[32mapply plugin: 'io.spring.dependency-management'[m
[32m+[m
[32m+[m[32mgroup = 'com.kodilla'[m
[32m+[m[32mversion = '0.0.1-SNAPSHOT'[m
[32m+[m[32msourceCompatibility = 1.8[m
[32m+[m
[32m+[m[32mrepositories {[m
[32m+[m[32m    mavenCentral()[m
[32m+[m[32m}[m
[32m+[m
[32m+[m
[32m+[m[32mdependencies {[m
[32m+[m[32m    implementation('org.springframework.boot:spring-boot-starter-web')[m
[32m+[m[32m    testImplementation('org.springframework.boot:spring-boot-starter-test')[m
[32m+[m[32m}[m
[1mdiff --git a/gradle/wrapper/gradle-wrapper.jar b/gradle/wrapper/gradle-wrapper.jar[m
[1mnew file mode 100644[m
[1mindex 0000000..1ce6e58[m
Binary files /dev/null and b/gradle/wrapper/gradle-wrapper.jar differ
[1mdiff --git a/gradle/wrapper/gradle-wrapper.properties b/gradle/wrapper/gradle-wrapper.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..576783b[m
[1m--- /dev/null[m
[1m+++ b/gradle/wrapper/gradle-wrapper.properties[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m#Fri Jan 11 17:07:03 CET 2019[m
[32m+[m[32mdistributionBase=GRADLE_USER_HOME[m
[32m+[m[32mdistributionPath=wrapper/dists[m
[32m+[m[32mzipStoreBase=GRADLE_USER_HOME[m
[32m+[m[32mzipStorePath=wrapper/dists[m
[32m+[m[32mdistributionUrl=https\://services.gradle.org/distributions/gradle-4.8.1-all.zip[m
[1mdiff --git a/gradlew b/gradlew[m
[1mnew file mode 100644[m
[1mindex 0000000..4453cce[m
[1m--- /dev/null[m
[1m+++ b/gradlew[m
[36m@@ -0,0 +1,172 @@[m
[32m+[m[32m#!/usr/bin/env sh[m
[32m+[m
[32m+[m[32m##############################################################################[m
[32m+[m[32m##[m
[32m+[m[32m##  Gradle start up script for UN*X[m
[32m+[m[32m##[m
[32m+[m[32m##############################################################################[m
[32m+[m
[32m+[m[32m# Attempt to set APP_HOME[m
[32m+[m[32m# Resolve links: $0 may be a link[m
[32m+[m[32mPRG="$0"[m
[32m+[m[32m# Need this for relative symlinks.[m
[32m+[m[32mwhile [ -h "$PRG" ] ; do[m
[32m+[m[32m    ls=`ls -ld "$PRG"`[m
[32m+[m[32m    link=`expr "$ls" : '.*-> \(.*\)$'`[m
[32m+[m[32m    if expr "$link" : '/.*' > /dev/null; then[m
[32m+[m[32m        PRG="$link"[m
[32m+[m[32m    else[m
[32m+[m[32m        PRG=`dirname "$PRG"`"/$link"[m
[32m+[m[32m    fi[m
[32m+[m[32mdone[m
[32m+[m[32mSAVED="`pwd`"[m
[32m+[m[32mcd "`dirname \"$PRG\"`/" >/dev/null[m
[32m+[m[32mAPP_HOME="`pwd -P`"[m
[32m+[m[32mcd "$SAVED" >/dev/null[m
[32m+[m
[32m+[m[32mAPP_NAME="Gradle"[m
[32m+[m[32mAPP_BASE_NAME=`basename "$0"`[m
[32m+[m
[32m+[m[32m# Add default JVM options here. You can also use JAVA_OPTS and GRADLE_OPTS to pass JVM options to this script.[m
[32m+[m[32mDEFAULT_JVM_OPTS=""[m
[32m+[m
[32m+[m[32m# Use the maximum available, or set MAX_FD != -1 to use that value.[m
[32m+[m[32mMAX_FD="maximum"[m
[32m+[m
[32m+[m[32mwarn ( ) {[m
[32m+[m[32m    echo "$*"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdie ( ) {[m
[32m+[m[32m    echo[m
[32m+[m[32m    echo "$*"[m
[32m+[m[32m    echo[m
[32m+[m[32m    exit 1[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# OS specific support (must be 'true' or 'false').[m
[32m+[m[32mcygwin=false[m
[32m+[m[32mmsys=false[m
[32m+[m[32mdarwin=false[m
[32m+[m[32mnonstop=false[m
[32m+[m[32mcase "`uname`" in[m
[32m+[m[32m  CYGWIN* )[m
[32m+[m[32m    cygwin=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  Darwin* )[m
[32m+[m[32m    darwin=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  MINGW* )[m
[32m+[m[32m    msys=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  NONSTOP* )[m
[32m+[m[32m    nonstop=true[m
[32m+[m[32m    ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32mCLASSPATH=$APP_HOME/gradle/wrapper/gradle-wrapper.jar[m
[32m+[m
[32m+[m[32m# Determine the Java command to use to start the JVM.[m
[32m+[m[32mif [ -n "$JAVA_HOME" ] ; then[m
[32m+[m[32m    if [ -x "$JAVA_HOME/jre/sh/java" ] ; then[m
[32m+[m[32m        # IBM's JDK on AIX uses strange locations for the executables[m
[32m+[m[32m        JAVACMD="$JAVA_HOME/jre/sh/java"[m
[32m+[m[32m    else[m
[32m+[m[32m        JAVACMD="$JAVA_HOME/bin/java"[m
[32m+[m[32m    fi[m
[32m+[m[32m    if [ ! -x "$JAVACMD" ] ; then[m
[32m+[m[32m        die "ERROR: JAVA_HOME is set to an invalid directory: $JAVA_HOME[m
[32m+[m
[32m+[m[32mPlease set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mlocation of your Java installation."[m
[32m+[m[32m    fi[m
[32m+[m[32melse[m
[32m+[m[32m    JAVACMD="java"[m
[32m+[m[32m    which java >/dev/null 2>&1 || die "ERROR: JAVA_HOME is not set and no 'java' command could be found in your PATH.[m
[32m+[m
[32m+[m[32mPlease set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mlocation of your Java installation."[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Increase the maximum file descriptors if we can.[m
[32m+[m[32mif [ "$cygwin" = "false" -a "$darwin" = "false" -a "$nonstop" = "false" ] ; then[m
[32m+[m[32m    MAX_FD_LIMIT=`ulimit -H -n`[m
[32m+[m[32m    if [ $? -eq 0 ] ; then[m
[32m+[m[32m        if [ "$MAX_FD" = "maximum" -o "$MAX_FD" = "max" ] ; then[m
[32m+[m[32m            MAX_FD="$MAX_FD_LIMIT"[m
[32m+[m[32m        fi[m
[32m+[m[32m        ulimit -n $MAX_FD[m
[32m+[m[32m        if [ $? -ne 0 ] ; then[m
[32m+[m[32m            warn "Could not set maximum file descriptor limit: $MAX_FD"[m
[32m+[m[32m        fi[m
[32m+[m[32m    else[m
[32m+[m[32m        warn "Could not query maximum file descriptor limit: $MAX_FD_LIMIT"[m
[32m+[m[32m    fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Darwin, add options to specify how the application appears in the dock[m
[32m+[m[32mif $darwin; then[m
[32m+[m[32m    GRADLE_OPTS="$GRADLE_OPTS \"-Xdock:name=$APP_NAME\" \"-Xdock:icon=$APP_HOME/media/gradle.icns\""[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Cygwin, switch paths to Windows format before running java[m
[32m+[m[32mif $cygwin ; then[m
[32m+[m[32m    APP_HOME=`cygpath --path --mixed "$APP_HOME"`[m
[32m+[m[32m    CLASSPATH=`cygpath --path --mixed "$CLASSPATH"`[m
[32m+[m[32m    JAVACMD=`cygpath --unix "$JAVACMD"`[m
[32m+[m
[32m+[m[32m    # We build the pattern for arguments to be converted via cygpath[m
[32m+[m[32m    ROOTDIRSRAW=`find -L / -maxdepth 1 -mindepth 1 -type d 2>/dev/null`[m
[32m+[m[32m    SEP=""[m
[32m+[m[32m    for dir in $ROOTDIRSRAW ; do[m
[32m+[m[32m        ROOTDIRS="$ROOTDIRS$SEP$dir"[m
[32m+[m[32m        SEP="|"[m
[32m+[m[32m    done[m
[32m+[m[32m    OURCYGPATTERN="(^($ROOTDIRS))"[m
[32m+[m[32m    # Add a user-defined pattern to the cygpath arguments[m
[32m+[m[32m    if [ "$GRADLE_CYGPATTERN" != "" ] ; then[m
[32m+[m[32m        OURCYGPATTERN="$OURCYGPATTERN|($GRADLE_CYGPATTERN)"[m
[32m+[m[32m    fi[m
[32m+[m[32m    # Now convert the arguments - kludge to limit ourselves to /bin/sh[m
[32m+[m[32m    i=0[m
[32m+[m[32m    for arg in "$@" ; do[m
[32m+[m[32m        CHECK=`echo "$arg"|egrep -c "$OURCYGPATTERN" -`[m
[32m+[m[32m        CHECK2=`echo "$arg"|egrep -c "^-"`                                 ### Determine if an option[m
[32m+[m
[32m+[m[32m        if [ $CHECK -ne 0 ] && [ $CHECK2 -eq 0 ] ; then                    ### Added a condition[m
[32m+[m[32m            eval `echo args$i`=`cygpath --path --ignore --mixed "$arg"`[m
[32m+[m[32m        else[m
[32m+[m[32m            eval `echo args$i`="\"$arg\""[m
[32m+[m[32m        fi[m
[32m+[m[32m        i=$((i+1))[m
[32m+[m[32m    done[m
[32m+[m[32m    case $i in[m
[32m+[m[32m        (0) set -- ;;[m
[32m+[m[32m        (1) set -- "$args0" ;;[m
[32m+[m[32m        (2) set -- "$args0" "$args1" ;;[m
[32m+[m[32m        (3) set -- "$args0" "$args1" "$args2" ;;[m
[32m+[m[32m        (4) set -- "$args0" "$args1" "$args2" "$args3" ;;[m
[32m+[m[32m        (5) set -- "$args0" "$args1" "$args2" "$args3" "$args4" ;;[m
[32m+[m[32m        (6) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" ;;[m
[32m+[m[32m        (7) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" ;;[m
[32m+[m[32m        (8) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" "$args7" ;;[m
[32m+[m[32m        (9) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" "$args7" "$args8" ;;[m
[32m+[m[32m    esac[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Escape application args[m
[32m+[m[32msave ( ) {[m
[32m+[m[32m    for i do printf %s\\n "$i" | sed "s/'/'\\\\''/g;1s/^/'/;\$s/\$/' \\\\/" ; done[m
[32m+[m[32m    echo " "[m
[32m+[m[32m}[m
[32m+[m[32mAPP_ARGS=$(save "$@")[m
[32m+[m
[32m+[m[32m# Collect all arguments for the java command, following the shell quoting and substitution rules[m
[32m+[m[32meval set -- $DEFAULT_JVM_OPTS $JAVA_OPTS $GRADLE_OPTS "\"-Dorg.gradle.appname=$APP_BASE_NAME\"" -classpath "\"$CLASSPATH\"" org.gradle.wrapper.GradleWrapperMain "$APP_ARGS"[m
[32m+[m
[32m+[m[32m# by default we should be in the correct project dir, but when run from Finder on Mac, the cwd is wrong[m
[32m+[m[32mif [ "$(uname)" = "Darwin" ] && [ "$HOME" = "$PWD" ]; then[m
[32m+[m[32m  cd "$(dirname "$0")"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mexec "$JAVACMD" "$@"[m
[1mdiff --git a/gradlew.bat b/gradlew.bat[m
[1mnew file mode 100644[m
[1mindex 0000000..f955316[m
[1m--- /dev/null[m
[1m+++ b/gradlew.bat[m
[36m@@ -0,0 +1,84 @@[m
[32m+[m[32m@if "%DEBUG%" == "" @echo off[m
[32m+[m[32m@rem ##########################################################################[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem  Gradle startup script for Windows[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem ##########################################################################[m
[32m+[m
[32m+[m[32m@rem Set local scope for the variables with windows NT shell[m
[32m+[m[32mif "%OS%"=="Windows_NT" setlocal[m
[32m+[m
[32m+[m[32mset DIRNAME=%~dp0[m
[32m+[m[32mif "%DIRNAME%" == "" set DIRNAME=.[m
[32m+[m[32mset APP_BASE_NAME=%~n0[m
[32m+[m[32mset APP_HOME=%DIRNAME%[m
[32m+[m
[32m+[m[32m@rem Add default JVM options here. You can also use JAVA_OPTS and GRADLE_OPTS to pass JVM options to this script.[m
[32m+[m[32mset DEFAULT_JVM_OPTS=[m
[32m+[m
[32m+[m[32m@rem Find java.exe[m
[32m+[m[32mif defined JAVA_HOME goto findJavaFromJavaHome[m
[32m+[m
[32m+[m[32mset JAVA_EXE=java.exe[m
[32m+[m[32m%JAVA_EXE% -version >NUL 2>&1[m
[32m+[m[32mif "%ERRORLEVEL%" == "0" goto init[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho ERROR: JAVA_HOME is not set and no 'java' command could be found in your PATH.[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mecho location of your Java installation.[m
[32m+[m
[32m+[m[32mgoto fail[m
[32m+[m
[32m+[m[32m:findJavaFromJavaHome[m
[32m+[m[32mset JAVA_HOME=%JAVA_HOME:"=%[m
[32m+[m[32mset JAVA_EXE=%JAVA_HOME%/bin/java.exe[m
[32m+[m
[32m+[m[32mif exist "%JAVA_EXE%" goto init[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho ERROR: JAVA_HOME is set to an invalid directory: %JAVA_HOME%[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mecho location of your Java installation.[m
[32m+[m
[32m+[m[32mgoto fail[m
[32m+[m
[32m+[m[32m:init[m
[32m+[m[32m@rem Get command-line arguments, handling Windows variants[m
[32m+[m
[32m+[m[32mif not "%OS%" == "Windows_NT" goto win9xME_args[m
[32m+[m
[32m+[m[32m:win9xME_args[m
[32m+[m[32m@rem Slurp the command line arguments.[m
[32m+[m[32mset CMD_LINE_ARGS=[m
[32m+[m[32mset _SKIP=2[m
[32m+[m
[32m+[m[32m:win9xME_args_slurp[m
[32m+[m[32mif "x%~1" == "x" goto execute[m
[32m+[m
[32m+[m[32mset CMD_LINE_ARGS=%*[m
[32m+[m
[32m+[m[32m:execute[m
[32m+[m[32m@rem Setup the command line[m
[32m+[m
[32m+[m[32mset CLASSPATH=%APP_HOME%\gradle\wrapper\gradle-wrapper.jar[m
[32m+[m
[32m+[m[32m@rem Execute Gradle[m
[32m+[m[32m"%JAVA_EXE%" %DEFAULT_JVM_OPTS% %JAVA_OPTS% %GRADLE_OPTS% "-Dorg.gradle.appname=%APP_BASE_NAME%" -classpath "%CLASSPATH%" org.gradle.wrapper.GradleWrapperMain %CMD_LINE_ARGS%[m
[32m+[m
[32m+[m[32m:end[m
[32m+[m[32m@rem End local scope for the variables with windows NT shell[m
[32m+[m[32mif "%ERRORLEVEL%"=="0" goto mainEnd[m
[32m+[m
[32m+[m[32m:fail[m
[32m+[m[32mrem Set variable GRADLE_EXIT_CONSOLE if you need the _script_ return code instead of[m
[32m+[m[32mrem the _cmd.exe /c_ return code![m
[32m+[m[32mif  not "" == "%GRADLE_EXIT_CONSOLE%" exit 1[m
[32m+[m[32mexit /b 1[m
[32m+[m
[32m+[m[32m:mainEnd[m
[32m+[m[32mif "%OS%"=="Windows_NT" endlocal[m
[32m+[m
[32m+[m[32m:omega[m
[1mdiff --git a/kodilla-stream/build.gradle b/kodilla-stream/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..1016d48[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/build.gradle[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32mplugins {[m
[32m+[m[32m    id 'java'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mgroup 'com.kodilla'[m
[32m+[m[32mversion '0.0.1-SNAPSHOT'[m
[32m+[m
[32m+[m[32msourceCompatibility = 1.8[m
[32m+[m
[32m+[m[32mrepositories {[m
[32m+[m[32m    mavenCentral()[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdependencies {[m
[32m+[m[32m    testCompile group: 'junit', name: 'junit', version: '4.12'[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/StreamMain.class b/kodilla-stream/out/production/classes/com/kodilla/stream/StreamMain.class[m
[1mnew file mode 100644[m
[1mindex 0000000..300ddd7[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/StreamMain.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/beautifier/PoemBeautifier.class b/kodilla-stream/out/production/classes/com/kodilla/stream/beautifier/PoemBeautifier.class[m
[1mnew file mode 100644[m
[1mindex 0000000..466d472[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/beautifier/PoemBeautifier.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/beautifier/PoemDecorator.class b/kodilla-stream/out/production/classes/com/kodilla/stream/beautifier/PoemDecorator.class[m
[1mnew file mode 100644[m
[1mindex 0000000..440e657[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/beautifier/PoemDecorator.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/ExecuteSaySomething.class b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/ExecuteSaySomething.class[m
[1mnew file mode 100644[m
[1mindex 0000000..0e317f1[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/ExecuteSaySomething.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/Executor.class b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/Executor.class[m
[1mnew file mode 100644[m
[1mindex 0000000..b45ae23[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/Executor.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/ExpressionExecutor.class b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/ExpressionExecutor.class[m
[1mnew file mode 100644[m
[1mindex 0000000..029a34b[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/ExpressionExecutor.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/MathExpression.class b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/MathExpression.class[m
[1mnew file mode 100644[m
[1mindex 0000000..599ec6d[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/MathExpression.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/Processor.class b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/Processor.class[m
[1mnew file mode 100644[m
[1mindex 0000000..c14eb5f[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/Processor.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/SaySomething.class b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/SaySomething.class[m
[1mnew file mode 100644[m
[1mindex 0000000..1dcfb1f[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/lambda/SaySomething.class differ
[1mdiff --git a/kodilla-stream/out/production/classes/com/kodilla/stream/reference/FunctionalCalculator.class b/kodilla-stream/out/production/classes/com/kodilla/stream/reference/FunctionalCalculator.class[m
[1mnew file mode 100644[m
[1mindex 0000000..62d60e1[m
Binary files /dev/null and b/kodilla-stream/out/production/classes/com/kodilla/stream/reference/FunctionalCalculator.class differ
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/StreamMain.java b/kodilla-stream/src/main/java/com/kodilla/stream/StreamMain.java[m
[1mnew file mode 100644[m
[1mindex 0000000..a5519ca[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/StreamMain.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage com.kodilla.stream;[m
[32m+[m
[32m+[m[32mimport com.kodilla.stream.beautifier.PoemBeautifier;[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32mpublic class StreamMain {[m
[32m+[m[32m    public static void main(String[] args) {[m
[32m+[m[32m        PoemBeautifier poemBeautifier = new PoemBeautifier();[m
[32m+[m[32m        poemBeautifier.beautify("Litwo!", (text) -> "ABC " + text + " ABC");[m
[32m+[m[32m        poemBeautifier.beautify("Ojczyzno moja!", (text) -> text.toUpperCase());[m
[32m+[m[32m        StringBuilder sb = new StringBuilder("Ty jesteś jak zdrowie!");[m
[32m+[m[32m        StringBuilder sb2 = new StringBuilder("Ten tylko się dowie");[m
[32m+[m[32m        poemBeautifier.beautify("Ty jesteś jak zdrowie!", (text) -> sb.reverse().toString());[m
[32m+[m[32m        poemBeautifier.beautify("Ten tylko się dowie", (text) -> sb2.substring(3).toString());[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/beautifier/PoemBeautifier.java b/kodilla-stream/src/main/java/com/kodilla/stream/beautifier/PoemBeautifier.java[m
[1mnew file mode 100644[m
[1mindex 0000000..64a058f[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/beautifier/PoemBeautifier.java[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32mpackage com.kodilla.stream.beautifier;[m
[32m+[m
[32m+[m[32mpublic class PoemBeautifier {[m
[32m+[m[32m    public void beautify(String text, PoemDecorator poemDecorator){[m
[32m+[m[32m        String result = poemDecorator.decorate(text);[m
[32m+[m[32m        System.out.println("Beautified poem: " + result);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/beautifier/PoemDecorator.java b/kodilla-stream/src/main/java/com/kodilla/stream/beautifier/PoemDecorator.java[m
[1mnew file mode 100644[m
[1mindex 0000000..da00157[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/beautifier/PoemDecorator.java[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32mpackage com.kodilla.stream.beautifier;[m
[32m+[m
[32m+[m[32mpublic interface PoemDecorator {[m
[32m+[m[32m    public String decorate(String text);[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/lambda/ExecuteSaySomething.java b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/ExecuteSaySomething.java[m
[1mnew file mode 100644[m
[1mindex 0000000..065ecd7[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/ExecuteSaySomething.java[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mpackage com.kodilla.stream.lambda;[m
[32m+[m
[32m+[m[32mpublic class ExecuteSaySomething implements Executor {[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public void process() {[m
[32m+[m[32m        System.out.println("This is an example text.");[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/lambda/Executor.java b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/Executor.java[m
[1mnew file mode 100644[m
[1mindex 0000000..56daffe[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/Executor.java[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32mpackage com.kodilla.stream.lambda;[m
[32m+[m
[32m+[m[32mpublic interface Executor {[m
[32m+[m[32m    public void process();[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/lambda/ExpressionExecutor.java b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/ExpressionExecutor.java[m
[1mnew file mode 100644[m
[1mindex 0000000..ca7a0b9[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/ExpressionExecutor.java[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32mpackage com.kodilla.stream.lambda;[m
[32m+[m
[32m+[m[32mpublic class ExpressionExecutor {[m
[32m+[m[32m    public void executeExpression(double a, double b, MathExpression mathExpression) {[m
[32m+[m[32m        double result = mathExpression.calculateExpression(a, b);[m
[32m+[m[32m        System.out.println("Result equals: " + result);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/lambda/MathExpression.java b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/MathExpression.java[m
[1mnew file mode 100644[m
[1mindex 0000000..446a912[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/MathExpression.java[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32mpackage com.kodilla.stream.lambda;[m
[32m+[m
[32m+[m[32mpublic interface MathExpression {[m
[32m+[m[32m    public double calculateExpression(double a, double b);[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/lambda/Processor.java b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/Processor.java[m
[1mnew file mode 100644[m
[1mindex 0000000..15f96dc[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/Processor.java[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mpackage com.kodilla.stream.lambda;[m
[32m+[m
[32m+[m[32mpublic class Processor {[m
[32m+[m[32m    public void execute(Executor executor) {[m
[32m+[m[32m        executor.process();[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/lambda/SaySomething.java b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/SaySomething.java[m
[1mnew file mode 100644[m
[1mindex 0000000..2465dd9[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/lambda/SaySomething.java[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32mpackage com.kodilla.stream.lambda;[m
[32m+[m
[32m+[m[32mpublic class SaySomething {[m
[32m+[m[32m    public void say() {[m
[32m+[m[32m        System.out.println("This is an example text.");[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-stream/src/main/java/com/kodilla/stream/reference/FunctionalCalculator.java b/kodilla-stream/src/main/java/com/kodilla/stream/reference/FunctionalCalculator.java[m
[1mnew file mode 100644[m
[1mindex 0000000..64dde30[m
[1m--- /dev/null[m
[1m+++ b/kodilla-stream/src/main/java/com/kodilla/stream/reference/FunctionalCalculator.java[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mpackage com.kodilla.stream.reference;[m
[32m+[m
[32m+[m[32mpublic class FunctionalCalculator {[m
[32m+[m[32m    public static double multiplyAByB(double a, double b) {[m
[32m+[m[32m        return a * b;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static double addAToB(double a, double b) {[m
[32m+[m[32m        return a + b;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static double subBFromA(double a, double b) {[m
[32m+[m[32m        return a - b;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public static double divideAByB(double a, double b) {[m
[32m+[m[32m        return a / b;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/build.gradle b/kodilla-testing/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..6343d22[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/build.gradle[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mplugins {[m
[32m+[m[32m    id 'java'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mgroup 'com.kodilla'[m
[32m+[m[32mversion '0.0.1-SNAPSHOT'[m
[32m+[m
[32m+[m[32msourceCompatibility = 1.8[m
[32m+[m
[32m+[m[32mrepositories {[m
[32m+[m[32m    mavenCentral()[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdependencies {[m
[32m+[m[32m    testCompile group: 'junit', name: 'junit', version: '4.12'[m
[32m+[m[32m    testCompile group: 'org.mockito', name: 'mockito-core', version: '2.23.4'[m
[32m+[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/build/libs/kodilla-testing-0.0.1-SNAPSHOT.jar b/kodilla-testing/build/libs/kodilla-testing-0.0.1-SNAPSHOT.jar[m
[1mnew file mode 100644[m
[1mindex 0000000..2de2399[m
Binary files /dev/null and b/kodilla-testing/build/libs/kodilla-testing-0.0.1-SNAPSHOT.jar differ
[1mdiff --git a/kodilla-testing/build/tmp/jar/MANIFEST.MF b/kodilla-testing/build/tmp/jar/MANIFEST.MF[m
[1mnew file mode 100644[m
[1mindex 0000000..59499bc[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/build/tmp/jar/MANIFEST.MF[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32mManifest-Version: 1.0[m
[32m+[m
[1mdiff --git a/kodilla-testing/out/production/classes/META-INF/com.kodilla.kodilla-testing.main.kotlin_module b/kodilla-testing/out/production/classes/META-INF/com.kodilla.kodilla-testing.main.kotlin_module[m
[1mnew file mode 100644[m
[1mindex 0000000..8fb6019[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/META-INF/com.kodilla.kodilla-testing.main.kotlin_module differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/TestingMain.class b/kodilla-testing/out/production/classes/com/kodilla/testing/TestingMain.class[m
[1mnew file mode 100644[m
[1mindex 0000000..c6fc698[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/TestingMain.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/calculator/Calculator.class b/kodilla-testing/out/production/classes/com/kodilla/testing/calculator/Calculator.class[m
[1mnew file mode 100644[m
[1mindex 0000000..6d5e2fc[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/calculator/Calculator.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/collection/OddNumbersExterminator.class b/kodilla-testing/out/production/classes/com/kodilla/testing/collection/OddNumbersExterminator.class[m
[1mnew file mode 100644[m
[1mindex 0000000..97b6798[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/collection/OddNumbersExterminator.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/forum/statistics/ForumStatistics.class b/kodilla-testing/out/production/classes/com/kodilla/testing/forum/statistics/ForumStatistics.class[m
[1mnew file mode 100644[m
[1mindex 0000000..4bfb64b[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/forum/statistics/ForumStatistics.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/forum/statistics/Statistics.class b/kodilla-testing/out/production/classes/com/kodilla/testing/forum/statistics/Statistics.class[m
[1mnew file mode 100644[m
[1mindex 0000000..d485c9d[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/forum/statistics/Statistics.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/library/Book.class b/kodilla-testing/out/production/classes/com/kodilla/testing/library/Book.class[m
[1mnew file mode 100644[m
[1mindex 0000000..fda78bd[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/library/Book.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/library/BookLibrary.class b/kodilla-testing/out/production/classes/com/kodilla/testing/library/BookLibrary.class[m
[1mnew file mode 100644[m
[1mindex 0000000..188736b[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/library/BookLibrary.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/library/LibraryDatabase.class b/kodilla-testing/out/production/classes/com/kodilla/testing/library/LibraryDatabase.class[m
[1mnew file mode 100644[m
[1mindex 0000000..6b5f584[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/library/LibraryDatabase.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/library/LibraryUser.class b/kodilla-testing/out/production/classes/com/kodilla/testing/library/LibraryUser.class[m
[1mnew file mode 100644[m
[1mindex 0000000..6b59b37[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/library/LibraryUser.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Circle.class b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Circle.class[m
[1mnew file mode 100644[m
[1mindex 0000000..ba696a3[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Circle.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Shape.class b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Shape.class[m
[1mnew file mode 100644[m
[1mindex 0000000..aab72b2[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Shape.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/shape/ShapeCollector.class b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/ShapeCollector.class[m
[1mnew file mode 100644[m
[1mindex 0000000..dd84b69[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/ShapeCollector.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Square.class b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Square.class[m
[1mnew file mode 100644[m
[1mindex 0000000..b8b02a5[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Square.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Triangle.class b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Triangle.class[m
[1mnew file mode 100644[m
[1mindex 0000000..93ca3f2[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/shape/Triangle.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/user/SimpleUser.class b/kodilla-testing/out/production/classes/com/kodilla/testing/user/SimpleUser.class[m
[1mnew file mode 100644[m
[1mindex 0000000..4c1c0f0[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/user/SimpleUser.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/weather/stub/Temperatures.class b/kodilla-testing/out/production/classes/com/kodilla/testing/weather/stub/Temperatures.class[m
[1mnew file mode 100644[m
[1mindex 0000000..430e316[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/weather/stub/Temperatures.class differ
[1mdiff --git a/kodilla-testing/out/production/classes/com/kodilla/testing/weather/stub/WeatherForecast.class b/kodilla-testing/out/production/classes/com/kodilla/testing/weather/stub/WeatherForecast.class[m
[1mnew file mode 100644[m
[1mindex 0000000..59a0f92[m
Binary files /dev/null and b/kodilla-testing/out/production/classes/com/kodilla/testing/weather/stub/WeatherForecast.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/META-INF/com.kodilla.kodilla-testing.main.kotlin_module b/kodilla-testing/out/test/classes/META-INF/com.kodilla.kodilla-testing.main.kotlin_module[m
[1mnew file mode 100644[m
[1mindex 0000000..8fb6019[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/META-INF/com.kodilla.kodilla-testing.main.kotlin_module differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/collection/CollectionTestSuite.class b/kodilla-testing/out/test/classes/com/kodilla/testing/collection/CollectionTestSuite.class[m
[1mnew file mode 100644[m
[1mindex 0000000..671d5f7[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/collection/CollectionTestSuite.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/forum/statistics/StatisticsTestSuite.class b/kodilla-testing/out/test/classes/com/kodilla/testing/forum/statistics/StatisticsTestSuite.class[m
[1mnew file mode 100644[m
[1mindex 0000000..00c8df3[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/forum/statistics/StatisticsTestSuite.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/library/BookDirectoryTestSuite.class b/kodilla-testing/out/test/classes/com/kodilla/testing/library/BookDirectoryTestSuite.class[m
[1mnew file mode 100644[m
[1mindex 0000000..4fb52d4[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/library/BookDirectoryTestSuite.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/shape/ShapeCollectorTestSuite.class b/kodilla-testing/out/test/classes/com/kodilla/testing/shape/ShapeCollectorTestSuite.class[m
[1mnew file mode 100644[m
[1mindex 0000000..02ad5e5[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/shape/ShapeCollectorTestSuite.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/weather/mock/WeatherForecastTestSuite.class b/kodilla-testing/out/test/classes/com/kodilla/testing/weather/mock/WeatherForecastTestSuite.class[m
[1mnew file mode 100644[m
[1mindex 0000000..cc53967[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/weather/mock/WeatherForecastTestSuite.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/weather/stub/TemperaturesStub.class b/kodilla-testing/out/test/classes/com/kodilla/testing/weather/stub/TemperaturesStub.class[m
[1mnew file mode 100644[m
[1mindex 0000000..9c491bd[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/weather/stub/TemperaturesStub.class differ
[1mdiff --git a/kodilla-testing/out/test/classes/com/kodilla/testing/weather/stub/WeatherForecastTestSuite.class b/kodilla-testing/out/test/classes/com/kodilla/testing/weather/stub/WeatherForecastTestSuite.class[m
[1mnew file mode 100644[m
[1mindex 0000000..68d5675[m
Binary files /dev/null and b/kodilla-testing/out/test/classes/com/kodilla/testing/weather/stub/WeatherForecastTestSuite.class differ
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/TestingMain.java b/kodilla-testing/src/main/java/com/kodilla/testing/TestingMain.java[m
[1mnew file mode 100644[m
[1mindex 0000000..b8a3224[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/TestingMain.java[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mpackage com.kodilla.testing;[m
[32m+[m
[32m+[m[32mimport com.kodilla.testing.calculator.Calculator;[m
[32m+[m[32mimport com.kodilla.testing.user.SimpleUser;[m
[32m+[m
[32m+[m[32mpublic class TestingMain {[m
[32m+[m[32m    public static void main(String[] args) {[m
[32m+[m[32m    }[m
[32m+[m[32m    }[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/calculator/Calculator.java b/kodilla-testing/src/main/java/com/kodilla/testing/calculator/Calculator.java[m
[1mnew file mode 100644[m
[1mindex 0000000..1f14801[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/calculator/Calculator.java[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32mpackage com.kodilla.testing.calculator;[m
[32m+[m
[32m+[m[32mpublic class Calculator {[m
[32m+[m
[32m+[m[32m    public int add(int a, int b){[m
[32m+[m[32m        return a + b;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int substract(int a, int b){[m
[32m+[m[32m        return a - b;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/collection/OddNumbersExterminator.java b/kodilla-testing/src/main/java/com/kodilla/testing/collection/OddNumbersExterminator.java[m
[1mnew file mode 100644[m
[1mindex 0000000..043b8be[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/collection/OddNumbersExterminator.java[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mpackage com.kodilla.testing.collection;[m
[32m+[m[32m        import java.util.*;[m
[32m+[m[32mpublic class OddNumbersExterminator {[m
[32m+[m
[32m+[m[32m    public ArrayList<Integer> exterminate(ArrayList<Integer> numbers){[m
[32m+[m
[32m+[m[32m        ArrayList<Integer> evenNumbers = new ArrayList<Integer>();[m
[32m+[m
[32m+[m[32m        for(int number : numbers)[m
[32m+[m[32m        {[m
[32m+[m[32m            if(number % 2 == 0)[m
[32m+[m[32m            {[m
[32m+[m[32m                evenNumbers.add(number);[m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m        return evenNumbers;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/forum/statistics/ForumStatistics.java b/kodilla-testing/src/main/java/com/kodilla/testing/forum/statistics/ForumStatistics.java[m
[1mnew file mode 100644[m
[1mindex 0000000..e261261[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/forum/statistics/ForumStatistics.java[m
[36m@@ -0,0 +1,63 @@[m
[32m+[m[32mpackage com.kodilla.testing.forum.statistics;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m
[32m+[m[32mpublic class ForumStatistics {[m
[32m+[m
[32m+[m[32m    private int numberofUsers;[m
[32m+[m[32m    private int posts;[m
[32m+[m[32m    private int comments;[m
[32m+[m[32m    private double averagePostsPerUser;[m
[32m+[m[32m    private double averageCommentsPerUser;[m
[32m+[m[32m    private double averageCommentsPerPosts;[m
[32m+[m
[32m+[m[32m    public void calculateAdvStatistics(Statistics statistics) {[m
[32m+[m[32m        numberofUsers = statistics.usersNames().size();[m
[32m+[m[32m        posts = statistics.postsCount();[m
[32m+[m[32m        comments = statistics.commentsCount();[m
[32m+[m[32m        averagePostsPerUser = (double) posts / numberofUsers;[m
[32m+[m[32m        averageCommentsPerUser = (double) comments / numberofUsers;[m
[32m+[m[32m        averageCommentsPerPosts = (double) comments / posts;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getNumberOfUsers() {[m
[32m+[m[32m        return numberofUsers;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getPosts() {[m
[32m+[m[32m        return posts;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getComments() {[m
[32m+[m[32m        return comments;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public double getAveragePostsPerUser() {[m
[32m+[m[32m        if (numberofUsers == 0){[m
[32m+[m[32m            return 0;[m
[32m+[m[32m        }[m
[32m+[m[32m        return averagePostsPerUser;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public double getAverageCommentsPerUser() {[m
[32m+[m[32m        if (numberofUsers == 0){[m
[32m+[m[32m            return 0;[m
[32m+[m[32m        }[m
[32m+[m[32m        return averageCommentsPerUser;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public double getAverageCommentsPerPosts() {[m
[32m+[m[32m        if (numberofUsers == 0){[m
[32m+[m[32m            return 0;[m
[32m+[m[32m        }[m
[32m+[m[32m        return averageCommentsPerPosts;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void showStatistics(){[m
[32m+[m[32m        System.out.println("Liczba użytkowników: " + getNumberOfUsers());[m
[32m+[m[32m        System.out.println("Liczba postów: " + getPosts());[m
[32m+[m[32m        System.out.println("Liczba komentarzy: " + getComments());[m
[32m+[m[32m        System.out.println("Średnia liczba postów na użytkownika: " + getAveragePostsPerUser());[m
[32m+[m[32m        System.out.println("Średnia liczba komentarzy na użytkownika: " + getAverageCommentsPerUser());[m
[32m+[m[32m        System.out.println("Średnia liczba komentarzy na post:" + getAverageCommentsPerPosts());[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/forum/statistics/Statistics.java b/kodilla-testing/src/main/java/com/kodilla/testing/forum/statistics/Statistics.java[m
[1mnew file mode 100644[m
[1mindex 0000000..ba063d5[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/forum/statistics/Statistics.java[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mpackage com.kodilla.testing.forum.statistics;[m
[32m+[m
[32m+[m[32mimport java.util.List;[m
[32m+[m
[32m+[m[32mpublic interface Statistics {[m
[32m+[m[32m    List<String> usersNames(); // list of users names[m
[32m+[m[32m    int postsCount();          // total quantity of forum posts[m
[32m+[m[32m    int commentsCount();       // total quantity of forum comments[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/library/Book.java b/kodilla-testing/src/main/java/com/kodilla/testing/library/Book.java[m
[1mnew file mode 100644[m
[1mindex 0000000..6e57492[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/library/Book.java[m
[36m@@ -0,0 +1,56 @@[m
[32m+[m[32mpackage com.kodilla.testing.library;[m
[32m+[m
[32m+[m[32mimport java.util.Objects;[m
[32m+[m
[32m+[m[32mpublic class Book {[m
[32m+[m[32m    String title;[m
[32m+[m[32m    String author;[m
[32m+[m[32m    int publicationYear;[m
[32m+[m
[32m+[m[32m    public Book(String title, String author, int publicationYear) {[m
[32m+[m[32m        this.title = title;[m
[32m+[m[32m        this.author = author;[m
[32m+[m[32m        this.publicationYear = publicationYear;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getTitle() {[m
[32m+[m[32m        return title;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getAuthor() {[m
[32m+[m[32m        return author;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getPublicationYear() {[m
[32m+[m[32m        return publicationYear;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public String toString() {[m
[32m+[m[32m        return "Book{" +[m
[32m+[m[32m                "title='" + title + '\'' +[m
[32m+[m[32m                ", author='" + author + '\'' +[m
[32m+[m[32m                ", publicationYear=" + publicationYear +[m
[32m+[m[32m                '}';[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public boolean equals(Object o) {[m
[32m+[m[32m        if (this == o) return true;[m
[32m+[m[32m        if (o == null || getClass() != o.getClass()) return false;[m
[32m+[m
[32m+[m[32m        Book book = (Book) o;[m
[32m+[m
[32m+[m[32m        if (publicationYear != book.publicationYear) return false;[m
[32m+[m[32m        if (!title.equals(book.title)) return false;[m
[32m+[m[32m        return author.equals(book.author);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public int hashCode() {[m
[32m+[m[32m        int result = title.hashCode();[m
[32m+[m[32m        result = 31 * result + author.hashCode();[m
[32m+[m[32m        result = 31 * result + publicationYear;[m
[32m+[m[32m        return result;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/library/BookLibrary.java b/kodilla-testing/src/main/java/com/kodilla/testing/library/BookLibrary.java[m
[1mnew file mode 100644[m
[1mindex 0000000..c7d9e2c[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/library/BookLibrary.java[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32mpackage com.kodilla.testing.library;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.List;[m
[32m+[m
[32m+[m[32mpublic class BookLibrary {[m
[32m+[m[32m    LibraryDatabase libraryDatabase;[m
[32m+[m
[32m+[m[32m    public BookLibrary(LibraryDatabase libraryDatabase) {[m
[32m+[m[32m        this.libraryDatabase = libraryDatabase;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public List<Book> listBooksWithCondition(String titleFragment) {[m
[32m+[m[32m        List<Book> bookList = new ArrayList<Book>();[m
[32m+[m[32m        if (titleFragment.length() < 3) return bookList;[m
[32m+[m[32m        List<Book> resultList = libraryDatabase[m
[32m+[m[32m                .listBooksWithCondition(titleFragment);[m
[32m+[m[32m        if (resultList.size() > 20) return bookList;[m
[32m+[m[32m        bookList = resultList;[m
[32m+[m[32m        return bookList;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public List<Book> listBooksInHandsOf(LibraryUser libraryUser) {[m
[32m+[m[32m        return libraryDatabase.listBooksInHandsOf(libraryUser);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/library/LibraryDatabase.java b/kodilla-testing/src/main/java/com/kodilla/testing/library/LibraryDatabase.java[m
[1mnew file mode 100644[m
[1mindex 0000000..7dc6448[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/library/LibraryDatabase.java[m
[36m@@ -0,0 +1,20 @@[m
[32m+[m[32mpackage com.kodilla.testing.library;[m
[32m+[m
[32m+[m[32mimport java.util.List;[m
[32m+[m
[32m+[m[32mpublic interface LibraryDatabase {[m
[32m+[m[32m    // lists books having title beginning with titleFragment[m
[32m+[m[32m    List<Book> listBooksWithCondition(String titleFragment);[m
[32m+[m
[32m+[m[32m    // list books borrowed by libraryUser[m
[32m+[m[32m    List<Book> listBooksInHandsOf(LibraryUser libraryUser);[m
[32m+[m
[32m+[m[32m    // try to rent a book for libraryUser[m
[32m+[m[32m    // returns true when success[m
[32m+[m[32m    // and returns false when book is unavailable to rent[m
[32m+[m[32m    boolean rentABook(LibraryUser libraryUser, Book book);[m
[32m+[m
[32m+[m[32m    // return all books borrowed by libraryUser to the library[m
[32m+[m[32m    // returns number of books returned back[m
[32m+[m[32m    int returnBooks(LibraryUser libraryUser);[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/library/LibraryUser.java b/kodilla-testing/src/main/java/com/kodilla/testing/library/LibraryUser.java[m
[1mnew file mode 100644[m
[1mindex 0000000..322391e[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/library/LibraryUser.java[m
[36m@@ -0,0 +1,52 @@[m
[32m+[m[32mpackage com.kodilla.testing.library;[m
[32m+[m
[32m+[m[32mpublic class LibraryUser {[m
[32m+[m[32m    String firstname;[m
[32m+[m[32m    String lastname;[m
[32m+[m[32m    String peselId;[m
[32m+[m
[32m+[m[32m    public LibraryUser(String firstname, String lastname, String peselId) {[m
[32m+[m[32m        this.firstname = firstname;[m
[32m+[m[32m        this.lastname = lastname;[m
[32m+[m[32m        this.peselId = peselId;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getFirstname() {[m
[32m+[m[32m        return firstname;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getLastname() {[m
[32m+[m[32m        return lastname;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getPeselId() {[m
[32m+[m[32m        return peselId;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public String toString() {[m
[32m+[m[32m        return "LibraryUser{" +[m
[32m+[m[32m                "firstname='" + firstname + '\'' +[m
[32m+[m[32m                ", lastname='" + lastname + '\'' +[m
[32m+[m[32m                ", peselId='" + peselId + '\'' +[m
[32m+[m[32m                '}';[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public boolean equals(Object o) {[m
[32m+[m[32m        if (this == o) return true;[m
[32m+[m[32m        if (!(o instanceof LibraryUser)) return false;[m
[32m+[m[32m        LibraryUser that = (LibraryUser) o;[m
[32m+[m[32m        if (!firstname.equals(that.firstname)) return false;[m
[32m+[m[32m        if (!lastname.equals(that.lastname)) return false;[m
[32m+[m[32m        return peselId.equals(that.peselId);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public int hashCode() {[m
[32m+[m[32m        int result = firstname.hashCode();[m
[32m+[m[32m        result = 31 * result + lastname.hashCode();[m
[32m+[m[32m        result = 31 * result + peselId.hashCode();[m
[32m+[m[32m        return result;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/shape/Circle.java b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Circle.java[m
[1mnew file mode 100644[m
[1mindex 0000000..0be98b2[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Circle.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage com.kodilla.testing.shape;[m
[32m+[m
[32m+[m[32mpublic class Circle implements Shape{[m
[32m+[m[32m    private double radius;[m
[32m+[m
[32m+[m[32m    public Circle(double radius) {[m
[32m+[m[32m        this.radius = radius;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getShapeName(){[m
[32m+[m[32m        return "Circle";[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public double getField(){[m
[32m+[m[32m        return (3.14 * radius * radius);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/shape/Shape.java b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Shape.java[m
[1mnew file mode 100644[m
[1mindex 0000000..45f3578[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Shape.java[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32mpackage com.kodilla.testing.shape;[m
[32m+[m
[32m+[m[32mpublic interface Shape {[m
[32m+[m
[32m+[m[32m    public String getShapeName();[m
[32m+[m
[32m+[m[32m    public double getField();[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/shape/ShapeCollector.java b/kodilla-testing/src/main/java/com/kodilla/testing/shape/ShapeCollector.java[m
[1mnew file mode 100644[m
[1mindex 0000000..29fcdb2[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/shape/ShapeCollector.java[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32mpackage com.kodilla.testing.shape;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m
[32m+[m[32mpublic class ShapeCollector {[m
[32m+[m[32m    private ArrayList<Shape> shapeCollector = new ArrayList<Shape>();[m
[32m+[m
[32m+[m[32m    public void addFigure(Shape shape){[m
[32m+[m[32m        shapeCollector.add(shape);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m    public void removeFigure(Shape shape){[m
[32m+[m[32m        shapeCollector.remove(shape);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public Shape getFigure(int n){[m
[32m+[m[32m        return shapeCollector.get(n);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public int getListSize(){[m
[32m+[m[32m        return shapeCollector.size();[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public void showFigure(){[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/shape/Square.java b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Square.java[m
[1mnew file mode 100644[m
[1mindex 0000000..28fd6e2[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Square.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage com.kodilla.testing.shape;[m
[32m+[m
[32m+[m[32mpublic class Square implements Shape {[m
[32m+[m[32m    private double side;[m
[32m+[m
[32m+[m[32m    public Square(double side) {[m
[32m+[m[32m        this.side = side;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getShapeName(){[m
[32m+[m[32m        return "Square";[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public double getField(){[m
[32m+[m[32m        return (side * side);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/shape/Triangle.java b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Triangle.java[m
[1mnew file mode 100644[m
[1mindex 0000000..d99db78[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/shape/Triangle.java[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mpackage com.kodilla.testing.shape;[m
[32m+[m
[32m+[m[32mpublic class Triangle implements Shape {[m
[32m+[m[32m    private double side;[m
[32m+[m[32m    private double height;[m
[32m+[m
[32m+[m[32m    public Triangle(double side, double height) {[m
[32m+[m[32m        this.side = side;[m
[32m+[m[32m        this.height = height;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public String getShapeName(){[m
[32m+[m[32m        return "Triangle";[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public double getField(){[m
[32m+[m[32m        return side * height * (0.5);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/user/SimpleUser.java b/kodilla-testing/src/main/java/com/kodilla/testing/user/SimpleUser.java[m
[1mnew file mode 100644[m
[1mindex 0000000..9dc173b[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/user/SimpleUser.java[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32mpackage com.kodilla.testing.user;[m
[32m+[m[32mpublic class SimpleUser {[m
[32m+[m[32m    String username;[m
[32m+[m[32m    String realName;[m
[32m+[m[32m    public SimpleUser(String username, String realName) {[m
[32m+[m[32m        this.username = username;[m
[32m+[m[32m        this.realName = realName;[m
[32m+[m[32m    }[m
[32m+[m[32m    public String getUsername() {[m
[32m+[m[32m        return username;[m
[32m+[m[32m    }[m
[32m+[m[32m    public String getRealName(){[m
[32m+[m[32m        return realName;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/weather/stub/Temperatures.java b/kodilla-testing/src/main/java/com/kodilla/testing/weather/stub/Temperatures.java[m
[1mnew file mode 100644[m
[1mindex 0000000..f09935d[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/weather/stub/Temperatures.java[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32mpackage com.kodilla.testing.weather.stub;[m
[32m+[m
[32m+[m[32mimport java.util.HashMap;[m
[32m+[m
[32m+[m[32mpublic interface Temperatures {[m
[32m+[m
[32m+[m[32m    //first element of the map is an identifier of weather station[m
[32m+[m[32m    //second element of the map is a temperature in Celsius degrees[m
[32m+[m
[32m+[m[32m    HashMap<Integer, Double> getTemperatures();[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/main/java/com/kodilla/testing/weather/stub/WeatherForecast.java b/kodilla-testing/src/main/java/com/kodilla/testing/weather/stub/WeatherForecast.java[m
[1mnew file mode 100644[m
[1mindex 0000000..c80c811[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/main/java/com/kodilla/testing/weather/stub/WeatherForecast.java[m
[36m@@ -0,0 +1,25 @@[m
[32m+[m[32mpackage com.kodilla.testing.weather.stub;[m
[32m+[m
[32m+[m[32mimport java.util.HashMap;[m
[32m+[m[32mimport java.util.Map;[m
[32m+[m
[32m+[m[32mpublic class WeatherForecast {[m
[32m+[m[32m    Temperatures temperatures;[m
[32m+[m
[32m+[m[32m    public WeatherForecast(Temperatures temperatures){[m
[32m+[m[32m        this.temperatures = temperatures;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    public HashMap<Integer, Double> calculateForecast() {[m
[32m+[m[32m        HashMap<Integer, Double> resultMap = new HashMap<Integer, Double>();[m
[32m+[m
[32m+[m[32m        for(Map.Entry<Integer, Double> temperature :[m
[32m+[m[32m                temperatures.getTemperatures().entrySet()){[m
[32m+[m
[32m+[m[32m            // adding 1 celsius degree to current value[m
[32m+[m[32m            // as a temporary weather forecast[m
[32m+[m[32m            resultMap.put(temperature.getKey(), temperature.getValue() + 1);[m
[32m+[m[32m        }[m
[32m+[m[32m        return resultMap;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/collection/CollectionTestSuite.java b/kodilla-testing/src/test/java/com/kodilla/testing/collection/CollectionTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..bb4d48c[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/collection/CollectionTestSuite.java[m
[36m@@ -0,0 +1,51 @@[m
[32m+[m[32mpackage com.kodilla.testing.collection;[m
[32m+[m[32mimport org.junit.*;[m
[32m+[m[32mimport java.util.*;[m
[32m+[m
[32m+[m[32mpublic class CollectionTestSuite {[m
[32m+[m[32m    @Before[m
[32m+[m[32m    public void before(){[m
[32m+[m[32m        System.out.println("Test Case: begin");[m
[32m+[m[32m    }[m
[32m+[m[32m    @After[m
[32m+[m[32m    public void after(){[m
[32m+[m[32m        System.out.println("Test Case: end");[m
[32m+[m[32m    }[m
[32m+[m[32m    @BeforeClass[m
[32m+[m[32m    public static void beforeClass() {[m
[32m+[m[32m        System.out.println("Test Suite: begin");[m
[32m+[m[32m    }[m
[32m+[m[32m    @AfterClass[m
[32m+[m[32m    public static void afterClass() {[m
[32m+[m[32m        System.out.println("Test Suite: end");[m
[32m+[m[32m    }[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testOddNumbersExterminatorEmptyList(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        OddNumbersExterminator exterminator = new OddNumbersExterminator();[m
[32m+[m[32m        ArrayList<Integer> testNumbers = new ArrayList<Integer>();[m
[32m+[m[32m        //When[m
[32m+[m[32m        ArrayList<Integer> result = exterminator.exterminate(testNumbers);[m
[32m+[m[32m        System.out.println("Testing: OddNumbersExterminatorEmptyList");[m
[32m+[m[32m        //Then[m
[32m+[m[32m        ArrayList<Integer> emptyTestList = new ArrayList<Integer>();[m
[32m+[m[32m        Assert.assertEquals(emptyTestList, result);[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testOddNumbersExterminatorNormalList(){[m
[32m+[m[32m    //Given[m
[32m+[m[32m    OddNumbersExterminator exterminator = new OddNumbersExterminator();[m
[32m+[m[32m    ArrayList<Integer> testNumbers = new ArrayList<Integer>();[m
[32m+[m[32m    testNumbers.add(5);[m
[32m+[m[32m    testNumbers.add(8);[m
[32m+[m[32m    testNumbers.add(7);[m
[32m+[m[32m    //When[m
[32m+[m[32m    ArrayList<Integer> result = exterminator.exterminate(testNumbers);[m
[32m+[m[32m        System.out.println("Testing: OddNumbersExterminatorNormalList");[m
[32m+[m[32m    //Then[m
[32m+[m[32m    List<Integer> testList = Arrays.asList(2, 4, 6);[m
[32m+[m[32m    testList.add(8);[m
[32m+[m[32m    Assert.assertEquals(testList, result);[m
[32m+[m[32m}[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/forum/statistics/StatisticsTestSuite.java b/kodilla-testing/src/test/java/com/kodilla/testing/forum/statistics/StatisticsTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..b6b88d9[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/forum/statistics/StatisticsTestSuite.java[m
[36m@@ -0,0 +1,77 @@[m
[32m+[m[32mpackage com.kodilla.testing.forum.statistics;[m
[32m+[m[32mimport org.junit.Assert;[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m
[32m+[m[32mimport static org.junit.Assert.*;[m
[32m+[m[32mimport static org.mockito.Mockito.mock;[m
[32m+[m[32mimport static org.mockito.Mockito.when;[m
[32m+[m
[32m+[m[32mpublic class StatisticsTestSuite {[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCalculateAdvStatisticsWhileUsers100AndPosts1000AndMoreComments() {[m
[32m+[m[32m        //Given[m
[32m+[m[32m        Statistics statistics = mock(Statistics.class);[m
[32m+[m[32m        ArrayList<String> usersNames = new ArrayList<String>();[m
[32m+[m[32m        for (int i = 0; i < 100; i++) {[m
[32m+[m[32m            usersNames.add("User" + i);[m
[32m+[m[32m        }[m
[32m+[m[32m        when(statistics.usersNames()).thenReturn(usersNames);[m
[32m+[m[32m        when(statistics.postsCount()).thenReturn(1000);[m
[32m+[m[32m        when(statistics.commentsCount()).thenReturn(3500);[m
[32m+[m[32m        ForumStatistics forumStatistics = new ForumStatistics();[m
[32m+[m[32m        //When[m
[32m+[m[32m        forumStatistics.calculateAdvStatistics(statistics);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        assertEquals(100, forumStatistics.getNumberOfUsers());[m
[32m+[m[32m        assertEquals(1000, forumStatistics.getPosts());[m
[32m+[m[32m        assertEquals(3500, forumStatistics.getComments());[m
[32m+[m[32m        assertEquals(10, forumStatistics.getAveragePostsPerUser(), 0);[m
[32m+[m[32m        assertEquals(35, forumStatistics.getAverageCommentsPerUser(), 0);[m
[32m+[m[32m        assertEquals(3.5, forumStatistics.getAverageCommentsPerPosts(), 0);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCalculateAdvStatisticsWhileUsersAndPostsAndCommentsAre0() {[m
[32m+[m[32m        //Given[m
[32m+[m[32m        Statistics statistics = mock(Statistics.class);[m
[32m+[m[32m        ArrayList<String> usersNames = new ArrayList<String>();[m
[32m+[m[32m        when(statistics.usersNames()).thenReturn(usersNames);[m
[32m+[m[32m        when(statistics.postsCount()).thenReturn(0);[m
[32m+[m[32m        when(statistics.commentsCount()).thenReturn(0);[m
[32m+[m[32m        ForumStatistics forumStatistics = new ForumStatistics();[m
[32m+[m[32m        //When[m
[32m+[m[32m        forumStatistics.calculateAdvStatistics(statistics);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        assertEquals(0, forumStatistics.getNumberOfUsers());[m
[32m+[m[32m        assertEquals(0, forumStatistics.getPosts());[m
[32m+[m[32m        assertEquals(0, forumStatistics.getComments());[m
[32m+[m[32m        assertEquals(0, forumStatistics.getAveragePostsPerUser(), 0);[m
[32m+[m[32m        assertEquals(0, forumStatistics.getAverageCommentsPerUser(), 0);[m
[32m+[m[32m        assertEquals(0, forumStatistics.getAverageCommentsPerPosts(), 0);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCalculateAdvStatisticsWhileCommentsLessThanPosts() {[m
[32m+[m[32m        //Given[m
[32m+[m[32m        Statistics statistics = mock(Statistics.class);[m
[32m+[m[32m        ArrayList<String> usersNames = new ArrayList<String>();[m
[32m+[m[32m        for (int i = 0; i < 550; i++) {[m
[32m+[m[32m            usersNames.add("User" + i);[m
[32m+[m[32m        }[m
[32m+[m[32m        when(statistics.usersNames()).thenReturn(usersNames);[m
[32m+[m[32m        when(statistics.postsCount()).thenReturn(112);[m
[32m+[m[32m        when(statistics.commentsCount()).thenReturn(84);[m
[32m+[m[32m        ForumStatistics forumStatistics = new ForumStatistics();[m
[32m+[m[32m        //When[m
[32m+[m[32m        forumStatistics.calculateAdvStatistics(statistics);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        assertEquals(550, forumStatistics.getNumberOfUsers());[m
[32m+[m[32m        assertEquals(112, forumStatistics.getPosts());[m
[32m+[m[32m        assertEquals(84, forumStatistics.getComments());[m
[32m+[m[32m        assertEquals(0.23, forumStatistics.getAveragePostsPerUser(), 0.1);[m
[32m+[m[32m        assertEquals(0.15, forumStatistics.getAverageCommentsPerUser(), 0.1);[m
[32m+[m[32m        assertEquals(0.75, forumStatistics.getAverageCommentsPerPosts(), 0.1);[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/library/BookDirectoryTestSuite.java b/kodilla-testing/src/test/java/com/kodilla/testing/library/BookDirectoryTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..805d751[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/library/BookDirectoryTestSuite.java[m
[36m@@ -0,0 +1,143 @@[m
[32m+[m[32mpackage com.kodilla.testing.library;[m
[32m+[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m[32mimport java.util.List;[m
[32m+[m
[32m+[m[32mimport static org.junit.Assert.assertEquals;[m
[32m+[m[32mimport static org.junit.Assert.assertTrue;[m
[32m+[m[32mimport static org.mockito.ArgumentMatchers.anyString;[m
[32m+[m[32mimport static org.mockito.Mockito.*;[m
[32m+[m
[32m+[m[32mpublic class BookDirectoryTestSuite {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testListBooksWithConditionsReturnList() {[m
[32m+[m[32m        // Given[m
[32m+[m[32m        LibraryDatabase libraryDatabaseMock = mock(LibraryDatabase.class);[m
[32m+[m[32m        BookLibrary bookLibrary = new BookLibrary(libraryDatabaseMock);[m
[32m+[m[32m        List<Book> resultListOfBooks = new ArrayList<Book>();[m
[32m+[m[32m        Book book1 = new Book("Secrets of Alamo", "John Smith", 2008);[m
[32m+[m[32m        Book book2 = new Book("Secretaries and Directors", "Dilbert Michigan", 2012);[m
[32m+[m[32m        Book book3 = new Book("Secret life of programmers", "Steve Wolkowitz", 2016);[m
[32m+[m[32m        Book book4 = new Book("Secrets of Java", "Ian Tenewitch", 2010);[m
[32m+[m[32m        resultListOfBooks.add(book1);[m
[32m+[m[32m        resultListOfBooks.add(book2);[m
[32m+[m[32m        resultListOfBooks.add(book3);[m
[32m+[m[32m        resultListOfBooks.add(book4);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksWithCondition("Secret"))[m
[32m+[m[32m                .thenReturn(resultListOfBooks);[m
[32m+[m
[32m+[m[32m        // When[m
[32m+[m[32m        List<Book> theListOfBooks = bookLibrary.listBooksWithCondition("Secret");[m
[32m+[m
[32m+[m[32m        // Then[m
[32m+[m[32m        assertEquals(4, theListOfBooks.size());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    private List<Book> generateListOfNBooks(int booksQuantity) {[m
[32m+[m[32m        List<Book> resultList = new ArrayList<Book>();[m
[32m+[m[32m        for(int n = 1; n <= booksQuantity; n++){[m
[32m+[m[32m            Book theBook = new Book("Title " + n, "Author " + n, 1970 + n);[m
[32m+[m[32m            resultList.add(theBook);[m
[32m+[m[32m        }[m
[32m+[m[32m        return resultList;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testListBooksWithConditionMoreThan20() {[m
[32m+[m[32m        // Given[m
[32m+[m[32m        LibraryDatabase libraryDatabaseMock = mock(LibraryDatabase.class);[m
[32m+[m[32m        BookLibrary bookLibrary = new BookLibrary(libraryDatabaseMock);[m
[32m+[m[32m        List<Book> resultListOf0Books = new ArrayList<Book>();[m
[32m+[m[32m        List<Book> resultListOf15Books = generateListOfNBooks(15);[m
[32m+[m[32m        List<Book> resultListOf40Books = generateListOfNBooks(40);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksWithCondition(anyString()))[m
[32m+[m[32m                .thenReturn(resultListOf15Books);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksWithCondition("ZeroBooks"))[m
[32m+[m[32m                .thenReturn(resultListOf0Books);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksWithCondition("FortyBooks"))[m
[32m+[m[32m                .thenReturn(resultListOf40Books);[m
[32m+[m
[32m+[m[32m        // When[m
[32m+[m[32m        List<Book> theListOfBooks0 = bookLibrary.listBooksWithCondition("ZeroBooks");[m
[32m+[m[32m        List<Book> theListOfBooks15 = bookLibrary.listBooksWithCondition("Any title");[m
[32m+[m[32m        List<Book> theListOfBooks40 = bookLibrary.listBooksWithCondition("FortyBooks");[m
[32m+[m[32m        // Then[m
[32m+[m
[32m+[m[32m        assertEquals(0, theListOfBooks0.size());[m
[32m+[m[32m        assertEquals(15, theListOfBooks15.size());[m
[32m+[m[32m        assertEquals(0, theListOfBooks40.size());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testListBooksWithConditionFragmentShorterThan3() {[m
[32m+[m[32m        // Given[m
[32m+[m[32m        LibraryDatabase libraryDatabaseMock = mock(LibraryDatabase.class);[m
[32m+[m[32m        BookLibrary bookLibrary = new BookLibrary(libraryDatabaseMock);[m
[32m+[m[32m        List<Book> resultListOf10Books = generateListOfNBooks(10);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksWithCondition(anyString()))[m
[32m+[m[32m                .thenReturn(resultListOf10Books);[m
[32m+[m
[32m+[m[32m        // When[m
[32m+[m[32m        List<Book> theListOfBooks10 = bookLibrary.listBooksWithCondition("An");[m
[32m+[m
[32m+[m[32m        // Then[m
[32m+[m[32m        assertEquals(0, theListOfBooks10.size());[m
[32m+[m[32m        verify(libraryDatabaseMock, times(0)).listBooksWithCondition(anyString());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testListBooksInHandsOfUserIsEmpty(){[m
[32m+[m[32m        // Given[m
[32m+[m[32m        LibraryDatabase libraryDatabaseMock = mock(LibraryDatabase.class);[m
[32m+[m[32m        BookLibrary bookLibrary = new BookLibrary(libraryDatabaseMock);[m
[32m+[m[32m        LibraryUser user = new LibraryUser("Ania", "Farna", "1");[m
[32m+[m[32m        List <Book> rentBooksList = new ArrayList<Book>();[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksInHandsOf(user)).thenReturn(rentBooksList);[m
[32m+[m[32m        // When[m
[32m+[m[32m        List<Book> theListOfRentBooks = bookLibrary.listBooksInHandsOf(user);[m
[32m+[m[32m        // Then[m
[32m+[m[32m        assertEquals(rentBooksList, theListOfRentBooks);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testListBooksInHandsOfUserIsOne(){[m
[32m+[m[32m        // Given[m
[32m+[m[32m        LibraryDatabase libraryDatabaseMock = mock(LibraryDatabase.class);[m
[32m+[m[32m        BookLibrary bookLibrary = new BookLibrary(libraryDatabaseMock);[m
[32m+[m[32m        LibraryUser user = new LibraryUser("Ania", "Farna", "1");[m
[32m+[m[32m        Book book1 = new Book("Secrets of Alamo", "John Smith", 2008);[m
[32m+[m[32m        List <Book> rentBooksList = new ArrayList<Book>();[m
[32m+[m[32m        rentBooksList.add(book1);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksInHandsOf(user)).thenReturn(rentBooksList);[m
[32m+[m[32m        // When[m
[32m+[m[32m        List<Book> theListOfRentBooks = bookLibrary.listBooksInHandsOf(user);[m
[32m+[m[32m        // Then[m
[32m+[m[32m        assertEquals(rentBooksList, theListOfRentBooks);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testListBooksInHandsOfUserIsFive(){[m
[32m+[m[32m        // Given[m
[32m+[m[32m        LibraryDatabase libraryDatabaseMock = mock(LibraryDatabase.class);[m
[32m+[m[32m        BookLibrary bookLibrary = new BookLibrary(libraryDatabaseMock);[m
[32m+[m[32m        LibraryUser user = new LibraryUser("Ania", "Farna", "1");[m
[32m+[m[32m        Book book1 = new Book("Secrets of Alamo", "John Smith", 2008);[m
[32m+[m[32m        Book book2 = new Book("Harry Potter", "J.K. Rowling", 1997);[m
[32m+[m[32m        Book book3 = new Book("Borneo", "Alan Parker", 1955);[m
[32m+[m[32m        Book book4 = new Book("Katyn", "Jan Drozdowski", 1988);[m
[32m+[m[32m        Book book5 = new Book("Gorgona", "Jan Parandowski", 1993);[m
[32m+[m[32m        List <Book> rentBooksList = new ArrayList<Book>();[m
[32m+[m[32m        rentBooksList.add(book1);[m
[32m+[m[32m        rentBooksList.add(book2);[m
[32m+[m[32m        rentBooksList.add(book3);[m
[32m+[m[32m        rentBooksList.add(book4);[m
[32m+[m[32m        rentBooksList.add(book5);[m
[32m+[m[32m        when(libraryDatabaseMock.listBooksInHandsOf(user)).thenReturn(rentBooksList);[m
[32m+[m[32m        // When[m
[32m+[m[32m        List<Book> theListOfRentBooks = bookLibrary.listBooksInHandsOf(user);[m
[32m+[m[32m        // Then[m
[32m+[m[32m        assertEquals(rentBooksList, theListOfRentBooks);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/shape/ShapeCollectorTestSuite.java b/kodilla-testing/src/test/java/com/kodilla/testing/shape/ShapeCollectorTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..bb6d184[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/shape/ShapeCollectorTestSuite.java[m
[36m@@ -0,0 +1,98 @@[m
[32m+[m[32mpackage com.kodilla.testing.shape;[m
[32m+[m[32mimport com.kodilla.testing.shape.ShapeCollector;[m
[32m+[m[32mimport org.junit.*;[m
[32m+[m
[32m+[m[32mimport java.util.ArrayList;[m
[32m+[m
[32m+[m[32mpublic class ShapeCollectorTestSuite {[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testAddFigure(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        ShapeCollector shapeCollector = new ShapeCollector();[m
[32m+[m[32m        Triangle triangle = new Triangle(8.5, 7.6);[m
[32m+[m[32m        Circle circle = new Circle (9.7);[m
[32m+[m[32m        Square square = new Square (7.5);[m
[32m+[m[32m        //When[m
[32m+[m[32m        shapeCollector.addFigure(triangle);[m
[32m+[m[32m        shapeCollector.addFigure(circle);[m
[32m+[m[32m        shapeCollector.addFigure(square);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(3, shapeCollector.getListSize());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testRemoveFigure(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        ShapeCollector shapeCollector = new ShapeCollector();[m
[32m+[m[32m        Triangle triangle = new Triangle(8.5, 7.6);[m
[32m+[m[32m        Circle circle = new Circle (9.7);[m
[32m+[m[32m        Square square = new Square (7.5);[m
[32m+[m[32m        //When[m
[32m+[m[32m        shapeCollector.addFigure(circle);[m
[32m+[m[32m        shapeCollector.addFigure(square);[m
[32m+[m[32m        shapeCollector.addFigure(triangle);[m
[32m+[m[32m        shapeCollector.removeFigure(triangle);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(2, shapeCollector.getListSize());[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testGetFigure(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        ShapeCollector shapeCollector = new ShapeCollector();[m
[32m+[m[32m        Triangle triangle = new Triangle(8.5, 7.6);[m
[32m+[m[32m        Circle circle = new Circle (9.7);[m
[32m+[m[32m        Square square = new Square (7.5);[m
[32m+[m[32m        shapeCollector.addFigure(triangle);[m
[32m+[m[32m        shapeCollector.addFigure(circle);[m
[32m+[m[32m        shapeCollector.addFigure(square);[m
[32m+[m[32m        //When[m
[32m+[m[32m        Shape testGetTriangle = shapeCollector.getFigure(0);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(testGetTriangle, triangle);[m
[32m+[m[32m        //When[m
[32m+[m[32m        Shape testGetCircle = shapeCollector.getFigure(1);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(testGetCircle, circle);[m
[32m+[m[32m        //When[m
[32m+[m[32m        Shape testGetSquare = shapeCollector.getFigure(2);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(testGetSquare, square);[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void getShapeName(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        ShapeCollector shapeCollector = new ShapeCollector();[m
[32m+[m[32m        Triangle triangle = new Triangle(8.5, 7.6);[m
[32m+[m[32m        Circle circle = new Circle (9.7);[m
[32m+[m[32m        Square square = new Square (7.5);[m
[32m+[m[32m        //When[m
[32m+[m[32m        String triangleName = triangle.getShapeName();[m
[32m+[m[32m        String circleName = circle.getShapeName();[m
[32m+[m[32m        String squareName = square.getShapeName();[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals("Triangle", triangleName);[m
[32m+[m[32m        Assert.assertEquals("Circle", circleName);[m
[32m+[m[32m        Assert.assertEquals("Square", squareName);[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void getField() {[m
[32m+[m[32m        //Given[m
[32m+[m[32m        ShapeCollector shapeCollector = new ShapeCollector();[m
[32m+[m[32m        Triangle triangle = new Triangle(8.5, 7.6);[m
[32m+[m[32m        Circle circle = new Circle (9.7);[m
[32m+[m[32m        Square square = new Square (7.5);[m
[32m+[m[32m        //When[m
[32m+[m[32m        double triangleField = triangle.getField();[m
[32m+[m[32m        double circleField = circle.getField();[m
[32m+[m[32m        double squareField = square.getField();[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(32.3, triangleField, 1);[m
[32m+[m[32m        Assert.assertEquals(295.5, circleField, 1);[m
[32m+[m[32m        Assert.assertEquals(56.2, squareField,1);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/weather/mock/WeatherForecastTestSuite.java b/kodilla-testing/src/test/java/com/kodilla/testing/weather/mock/WeatherForecastTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..b8bd183[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/weather/mock/WeatherForecastTestSuite.java[m
[36m@@ -0,0 +1,33 @@[m
[32m+[m[32mpackage com.kodilla.testing.weather.mock;[m
[32m+[m
[32m+[m[32mimport com.kodilla.testing.weather.stub.Temperatures;[m
[32m+[m[32mimport com.kodilla.testing.weather.stub.WeatherForecast;[m
[32m+[m[32mimport org.junit.Assert;[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m[32mimport java.util.HashMap;[m
[32m+[m
[32m+[m[32mimport static org.mockito.Mockito.mock;[m
[32m+[m[32mimport static org.mockito.Mockito.when;[m
[32m+[m
[32m+[m[32mpublic class WeatherForecastTestSuite {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCalculateForecastWithMock() {[m
[32m+[m[32m        //Given[m
[32m+[m[32m        Temperatures temperaturesMock = mock(Temperatures.class);[m
[32m+[m[32m        HashMap<Integer, Double> temperaturesMap = new HashMap<Integer, Double>();[m
[32m+[m[32m        temperaturesMap.put(0, 25.5);[m
[32m+[m[32m        temperaturesMap.put(1, 26.2);[m
[32m+[m[32m        temperaturesMap.put(2, 24.8);[m
[32m+[m[32m        temperaturesMap.put(3, 25.2);[m
[32m+[m[32m        temperaturesMap.put(4, 26.1);[m
[32m+[m[32m        when(temperaturesMock.getTemperatures()).thenReturn(temperaturesMap);[m
[32m+[m
[32m+[m[32m        WeatherForecast weatherForecast = new WeatherForecast(temperaturesMock);[m
[32m+[m
[32m+[m[32m        //When[m
[32m+[m[32m        int quantityOfSensors = weatherForecast.calculateForecast().size();[m
[32m+[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(5, quantityOfSensors);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/weather/stub/TemperaturesStub.java b/kodilla-testing/src/test/java/com/kodilla/testing/weather/stub/TemperaturesStub.java[m
[1mnew file mode 100644[m
[1mindex 0000000..1a775d1[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/weather/stub/TemperaturesStub.java[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mpackage com.kodilla.testing.weather.stub;[m
[32m+[m
[32m+[m[32mimport java.util.HashMap;[m
[32m+[m
[32m+[m[32mpublic class TemperaturesStub implements Temperatures {[m
[32m+[m[32m    @Override[m
[32m+[m[32m    public HashMap<Integer, Double> getTemperatures() {[m
[32m+[m[32m        HashMap<Integer, Double> stubResult = new HashMap<Integer, Double>();[m
[32m+[m
[32m+[m[32m        // dummy data[m
[32m+[m[32m        stubResult.put(0, 25.5);[m
[32m+[m[32m        stubResult.put(1, 26.2);[m
[32m+[m[32m        stubResult.put(2, 24.8);[m
[32m+[m[32m        stubResult.put(3, 25.2);[m
[32m+[m[32m        stubResult.put(4, 26.1);[m
[32m+[m
[32m+[m[32m        return stubResult;[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/kodilla-testing/src/test/java/com/kodilla/testing/weather/stub/WeatherForecastTestSuite.java b/kodilla-testing/src/test/java/com/kodilla/testing/weather/stub/WeatherForecastTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..6421156[m
[1m--- /dev/null[m
[1m+++ b/kodilla-testing/src/test/java/com/kodilla/testing/weather/stub/WeatherForecastTestSuite.java[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32mpackage com.kodilla.testing.weather.stub;[m
[32m+[m
[32m+[m[32mimport org.junit.Assert;[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m
[32m+[m[32mpublic class WeatherForecastTestSuite {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCalculateForecastWithStub() {[m
[32m+[m[32m        //Given[m
[32m+[m[32m        Temperatures temperatures = new TemperaturesStub();[m
[32m+[m[32m        WeatherForecast weatherForecast = new WeatherForecast(temperatures);[m
[32m+[m
[32m+[m[32m        //When[m
[32m+[m[32m        int quantityOfSensors = weatherForecast.calculateForecast().size();[m
[32m+[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals(5, quantityOfSensors);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/org/junit/annotations.xml b/org/junit/annotations.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..66fa72f[m
[1m--- /dev/null[m
[1m+++ b/org/junit/annotations.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<root>[m
[32m+[m[32m    <item name='org.junit.Test'>[m
[32m+[m[32m        <annotation name='java.lang.Deprecated'/>[m
[32m+[m[32m    </item>[m
[32m+[m[32m</root>[m
\ No newline at end of file[m
[1mdiff --git a/settings.gradle b/settings.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..e3e6c9a[m
[1m--- /dev/null[m
[1m+++ b/settings.gradle[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32mrootProject.name = 'kodilla-course'[m
[32m+[m[32minclude 'kodilla-testing'[m
[32m+[m[32minclude 'kodilla-stream'[m
[32m+[m
[1mdiff --git a/src/main/java/com/kodilla/FirstClass.java b/src/main/java/com/kodilla/FirstClass.java[m
[1mnew file mode 100644[m
[1mindex 0000000..8726cee[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/kodilla/FirstClass.java[m
[36m@@ -0,0 +1,4 @@[m
[32m+[m[32mpackage com.kodilla;[m
[32m+[m
[32m+[m[32mpublic class FirstClass {[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/java/com/kodilla/KodillaCourseApplication.java b/src/main/java/com/kodilla/KodillaCourseApplication.java[m
[1mnew file mode 100644[m
[1mindex 0000000..bd8d7a1[m
[1m--- /dev/null[m
[1m+++ b/src/main/java/com/kodilla/KodillaCourseApplication.java[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32mpackage com.kodilla;[m
[32m+[m
[32m+[m[32mimport org.springframework.boot.SpringApplication;[m
[32m+[m[32mimport org.springframework.boot.autoconfigure.SpringBootApplication;[m
[32m+[m
[32m+[m[32m@SpringBootApplication[m
[32m+[m[32mpublic class KodillaCourseApplication {[m
[32m+[m
[32m+[m[32m    public static void main(String[] args) {[m
[32m+[m[32m        SpringApplication.run(KodillaCourseApplication.class, args);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[1mdiff --git a/src/main/resources/application.properties b/src/main/resources/application.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..e69de29[m
[1mdiff --git a/src/test/java/com/kodilla/KodillaCourseApplicationTests.java b/src/test/java/com/kodilla/KodillaCourseApplicationTests.java[m
[1mnew file mode 100644[m
[1mindex 0000000..fb244f1[m
[1m--- /dev/null[m
[1m+++ b/src/test/java/com/kodilla/KodillaCourseApplicationTests.java[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32mpackage com.kodilla;[m
[32m+[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m[32mimport org.junit.runner.RunWith;[m
[32m+[m[32mimport org.springframework.boot.test.context.SpringBootTest;[m
[32m+[m[32mimport org.springframework.test.context.junit4.SpringRunner;[m
[32m+[m
[32m+[m[32m@RunWith(SpringRunner.class)[m
[32m+[m[32m@SpringBootTest[m
[32m+[m[32mpublic class KodillaCourseApplicationTests {[m
[32m+[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void contextLoads() {[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
[1mdiff --git a/src/test/java/com/kodilla/testing/forum/ForumTestSuite.java b/src/test/java/com/kodilla/testing/forum/ForumTestSuite.java[m
[1mnew file mode 100644[m
[1mindex 0000000..5772a5d[m
[1m--- /dev/null[m
[1m+++ b/src/test/java/com/kodilla/testing/forum/ForumTestSuite.java[m
[36m@@ -0,0 +1,41 @@[m
[32m+[m[32mpackage com.kodilla.testing.forum;[m
[32m+[m[32mimport com.kodilla.testing.user.SimpleUser;[m
[32m+[m[32mimport org.junit.*;[m
[32m+[m[32mpublic class ForumTestSuite {[m
[32m+[m[32m    @Before[m
[32m+[m[32m    public void before(){[m
[32m+[m[32m        System.out.println("Test Case: begin");[m
[32m+[m[32m    }[m
[32m+[m[32m    @After[m
[32m+[m[32m    public void after(){[m
[32m+[m[32m        System.out.println("Test Case: end");[m
[32m+[m[32m    }[m
[32m+[m[32m    @BeforeClass[m
[32m+[m[32m    public static void beforeClass() {[m
[32m+[m[32m        System.out.println("Test Suite: begin");[m
[32m+[m[32m    }[m
[32m+[m[32m    @AfterClass[m
[32m+[m[32m    public static void afterClass() {[m
[32m+[m[32m        System.out.println("Test Suite: end");[m
[32m+[m[32m    }[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCaseUsername(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        SimpleUser simpleUser = new SimpleUser("theForumUser", "John Smith");[m
[32m+[m[32m        //When[m
[32m+[m[32m        String result = simpleUser.getUsername();[m
[32m+[m[32m        System.out.println("Testing " + result);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals("theForumUser", result);[m
[32m+[m[32m    }[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void testCaseRealName(){[m
[32m+[m[32m        //Given[m
[32m+[m[32m        SimpleUser simpleUser = new SimpleUser("theForumUser", "John Smith");[m
[32m+[m[32m        //When[m
[32m+[m[32m        String result = simpleUser.getRealName();[m
[32m+[m[32m        System.out.println("Testing " + result);[m
[32m+[m[32m        //Then[m
[32m+[m[32m        Assert.assertEquals("John Smith", result);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
