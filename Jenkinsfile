pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                echo '===== Checkout Source ====='
                checkout scm
            }
        }

        stage('Build') {
            steps {
                echo '===== Build Start ====='
                bat '''
                cd jenkins_kadai
                "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\MSBuild\\Current\\Bin\\MSBuild.exe" jenkins_kadai.sln /p:Configuration=Release
                '''
                echo '===== Build End ====='
            }
        }
    }

    post {
        success {
            echo '===== BUILD SUCCESS ====='
        }
        failure {
            echo '===== BUILD FAILURE ====='
        }
    }
}
