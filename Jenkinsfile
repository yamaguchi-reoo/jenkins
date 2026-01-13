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
                bat 'dir'
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
