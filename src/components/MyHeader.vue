<template>
    <el-header>
        <el-row :gutter="20">
            <el-col :span="14" pull="2" style="font-size: 22px">王星星的魔燈</el-col>
            <el-col :span="4" push="2" style="font-size: 16px; padding-top: 6px">Archives</el-col>
            <el-col :span="4" style="font-size: 16px; padding-top: 6px;">About</el-col>
        </el-row>
        <el-divider/>
    </el-header>
</template>

<script>
    export default {
        name: "MyHeader"
    }
</script>

<style scoped>
    /*.el-header {*/
    /*    background-color: #d1bf4d;*/
    /*    text-align: center;*/
    /*    line-height: 50px;*/
    /*    width: 100%;*/
    /*}*/
    .el-col {
        margin-top: 9px;
        margin-bottom: -2px;;
        border-radius: 4px;
        text-align: center;

    }
</style>
