//
//  ViewController.h
//  ZYDecodeAndEncodeH264
//
//  Created by jheit on 2017/4/12.
//  Copyright © 2017年 lzy. All rights reserved.
//

#import <UIKit/UIKit.h>

// 编码
#import "H264HwEncoderImpl.h"
@interface ViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate, H264HwEncoderImplDelegate>

@end

