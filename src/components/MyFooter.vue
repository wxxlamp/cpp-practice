<template>
    <el-footer style="margin-top: 50px">
<!--        <el-divider/>-->
        © 2019 - {{getFullYear()}}. Powered by Java and JavaScript.
        <br/>
        The blog has been running for {{getTime(time)}} days and has been visited 10 times with a total of 1 users
    </el-footer>
</template>

<script>
    export default {
        name: "MyFooter",
        data() {
            return {
                time: '2019/09/21 00:00:00',
                num: 0,
                nums: 0
            }
        },
        methods: {
            getFullYear() {
                return new Date().getFullYear();
            },
            getTime(oldTime) {
                return Math.floor((new Date() - new Date(oldTime)) / (24 * 3600 * 1000))
            },
        }
    }
</script>

<style scoped>
    .el-footer {
        color: #AAAAAA;
    }
</style>
