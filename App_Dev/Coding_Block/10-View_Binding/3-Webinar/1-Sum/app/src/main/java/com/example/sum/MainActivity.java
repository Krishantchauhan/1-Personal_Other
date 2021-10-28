package com.example.sum;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    EditText et1,et2;
    Button btn;
    TextView disp;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        et1 = findViewById(R.id.num1);
        et2 = findViewById(R.id.num2);

        btn = findViewById(R.id.sum);
        disp = findViewById(R.id.ans);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                int num1 = Integer.valueOf(et1.getText().toString());
                int num2 = Integer.valueOf(et2.getText().toString());

                int sum = num1 + num2 ;

                disp.setText(String.valueOf(sum));
            }
        });
    }
}