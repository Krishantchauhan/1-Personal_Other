package com.example.calculator;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1,et2;
    Button add,sub,mul,div;
    TextView tv,operator;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.num);
        et2 = findViewById(R.id.num2);

        add = findViewById(R.id.plus);
        sub = findViewById(R.id.sub);
        mul = findViewById(R.id.mul);
        div = findViewById(R.id.div);

        tv = findViewById(R.id.tv);
        operator = findViewById(R.id.operator);


        //ADDITION
        add.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                float num1 = Float.valueOf(et1.getText().toString());
                float num2 = Float.valueOf(et2.getText().toString());

                float sum =num1 +num2;

                tv.setText(String.valueOf(sum));
                operator.setText("+");
            }
        });


        //SUBTRACTION
        sub.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                float num1 = Float.valueOf(et1.getText().toString());
                float num2 = Float.valueOf(et2.getText().toString());

                float sub =num1 -num2;

                tv.setText(String.valueOf(sub));
                operator.setText("-");
            }
        });

        //MULTIPLICATION
        mul.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                float num1 = Float.valueOf(et1.getText().toString());
                float num2 = Float.valueOf(et2.getText().toString());

                float mul =num1 * num2;

                tv.setText(String.valueOf(mul));
                operator.setText("*");
            }
        });

        //Division
        div.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                float num1 = Float.valueOf(et1.getText().toString());
                float num2 = Float.valueOf(et2.getText().toString());

                float div =num1 / num2;

                tv.setText(String.valueOf(div));
                operator.setText("/");
            }
        });
    }
}