//
//  JMMonitor.h
//  JMMonitorView
//
//  Created by lzj<lizhijian_21@163.com> on 2020/6/28.
//  Copyright © 2020 Jimi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JMMonitor : UIImageView


/// 显示图片
/// @param image UIImage
- (void)displayImage:(UIImage *)image;

/// 加载RGB24画面数据
/// @param rgbData rgb24数据
/// @param width 宽
/// @param height 高
- (void)displayRgb24Data:(const u_char *)rgbData videoWidth:(NSInteger)width videoHeight:(NSInteger)height;

@end

NS_ASSUME_NONNULL_END
