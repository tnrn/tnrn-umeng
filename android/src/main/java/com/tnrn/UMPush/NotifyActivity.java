package com.tnrn.UMPush;

import android.content.ComponentName;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import com.umeng.message.UmengNotifyClickActivity;

import org.android.agoo.common.AgooConstants;

public class NotifyActivity extends UmengNotifyClickActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_notify);
    }

    @Override
    public void onMessage(Intent intent) {
        super.onMessage(intent);  //此方法必须调用，否则无法统计打开数
        String body = intent.getStringExtra(AgooConstants.MESSAGE_BODY);
        Log.i("avery_zjz", body);
        RNUMPushModule.onMessageOutLine(body);
        Intent newIntent = new Intent();
//        newIntent.setComponent(new ComponentName("com.rongxin.wellloan", "com.rongxin.wellloan.MainActivity"));

        newIntent.setClassName("com.rongxin.wellloan", "com.rongxin.wellloan.MainActivity");

        this.startActivity(newIntent);
        this.finish();
    }
}
