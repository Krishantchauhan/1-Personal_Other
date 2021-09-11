package com.example.fade;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {
    public void fade(View view){
        ImageView keven_small = (ImageView) findViewById(R.id.keven_small);

        ImageView keven = (ImageView) findViewById(R.id.keven);

        keven_small.animate().alpha(0f).setDuration(3000);

        keven.animate().alpha(1f).setDuration(3000);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}