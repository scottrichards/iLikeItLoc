//
//  ViewController.m
//  iLikeIt
//
//  Created by Kauserali on 04/03/14.
//  Copyright (c) 2014 Raywenderlich. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic, weak) IBOutlet UIButton *likeButton;
@property (nonatomic, weak) IBOutlet UILabel *salesCountLabel;
@property (nonatomic, weak) IBOutlet UIImageView *imageView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _salesCountLabel.text = [NSString stringWithFormat:@"Yesterday you sold %@ apps", @(1000000)];
    [_likeButton setTitle:@"You like?" forState:UIControlStateNormal];
}

- (IBAction)youLikeButtonPressed:(id)sender {
    if (_salesCountLabel.hidden == YES) {
        _salesCountLabel.hidden = NO;
        _imageView.hidden = NO;
        _salesCountLabel.alpha = 0;
        _imageView.alpha = 0;
        
        [UIView animateWithDuration:1 animations:^(){
            _salesCountLabel.alpha = 1;
            _imageView.alpha = 1;
        } completion:^(BOOL finished) {
            if (finished) {
                _salesCountLabel.hidden = YES;
                _imageView.hidden = YES;
            }
        }];
    }
}
@end
