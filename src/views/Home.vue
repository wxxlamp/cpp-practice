<template>
  <el-container class="home">
    <el-main style="margin-left: 230px; ">
      <div style="text-align: left; min-height: 60px">
        <p style="font-size: 21px; color: #605267">C++的历史局限</p>
        <p style="color: #AAAAAA">Oct 03 2019</p>
        <p style="margin-bottom: 50px">天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。
          天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。</p>
        <el-divider/>
      </div>
      <div style="text-align: left; min-height: 60px">
        <p style="font-size: 21px; color: #605267">C++的历史局限</p>
        <p style="color: #AAAAAA">Oct 03 2019</p>
        <p style="margin-bottom: 50px">天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。
          天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。</p>
        <el-divider/>
      </div>
      <div style="text-align: left; min-height: 60px">
        <p style="font-size: 21px; color: #605267">C++的历史局限</p>
        <p style="color: #AAAAAA">Oct 03 2019</p>
        <p style="margin-bottom: 50px">天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。
          天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。</p>
        <el-divider/>
      </div>
      <div style="text-align: left; min-height: 60px">
        <p style="font-size: 21px; color: #605267">C++的历史局限</p>
        <p style="color: #AAAAAA">Oct 03 2019</p>
        <p style="margin-bottom: 50px">天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。
          天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。天将降大任于斯人也，必先苦其心志，劳其筋骨，空乏其身。</p>
        <el-divider/>
      </div>
      <el-pagination layout="prev, pager, next" :total="total" :current-page="page" :page-size="size" style="color: #AAAAAA"
                     @current-change="currentChange" @prev-click="page=page-1" @next-click="page=page+1">
      </el-pagination>
    </el-main>
    <el-aside width="250px" style="margin-right: 200px; margin-top: 30px; padding-left:-30px; text-align: left">
      <p style="margin-bottom: -10px">Tags</p>
      <el-divider/>
      <div style="font-size: 14px; ">
        <el-badge  type="primary">C++</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">Java</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">Vue</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">面经</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">计算机基础</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">随笔</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">分布式</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">数据库</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">源码解析</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">DIY</el-badge><el-divider direction="vertical"></el-divider>
        <el-badge  type="primary">帅帅帅</el-badge>
      </div>

    </el-aside>
  </el-container>
</template>

<script>

export default {
  name: 'Home',
  components: {

  },
  data () {
    return {
      active: 'active',
      total: 40,
      page: 1, // 当前页数
      size: 6 // 每页显示6条
    }
  }
}
</script>

<style scoped>
  /*.home {*/
  /*  background-color: #B3C0D1;*/
  /*  color: #333;*/
  /*  text-align: center;*/
  /*  line-height: 60px;*/
  /*}*/
</style>
