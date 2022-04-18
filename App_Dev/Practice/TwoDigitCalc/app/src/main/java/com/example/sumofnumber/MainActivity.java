package com.example.sumofnumber;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1,et2;
    TextView tv;
    Button btn;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.num1);
        et2 = findViewById(R.id.num2);

        tv = findViewById(R.id.tv);

        btn = findViewById(R.id.btn);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                int num1= Integer.parseInt(et1.getText().toString());
                int num2= Integer.parseInt(et2.getText().toString());

                int sum = num1+num2;

                tv.setText(String.valueOf(sum));
            }
        });

    }
}