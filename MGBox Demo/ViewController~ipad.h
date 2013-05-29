//
//  ViewController~ipad.h
//  MGBox Demo
//
//  Created by Zhou Weiou on 13-5-28.
//  Copyright (c) 2013年 Big Paua. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MGBox;

@interface ViewController_ipad : UIViewController<UIScrollViewDelegate>

- (void)addBox:(UIButton *)sender;
- (void)removeBox:(UIButton *)sender;
- (void)moveUp:(UIButton *)sender;
- (void)moveDown:(UIButton *)sender;
- (void)shuffle;

- (MGBox *)parentBoxOf:(UIView *)view;
- (UIButton *)button:(NSString *)title for:(SEL)selector;

@end
