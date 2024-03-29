//
//  Triangle.h
//  obj-c HW2
//
//  Created by Elena on 29.03.2024.
//

#import <Foundation/Foundation.h>
#import "Figure.h"

NS_ASSUME_NONNULL_BEGIN

@interface Triangle : Figure {
    @private NSString *_name;
    @private CGFloat _sideA;
    @private CGFloat _sideB;
    @private CGFloat _sideC;
}

-(instancetype)initSideA:(NSInteger)sideA sideB:(NSInteger)sideB sideC:(NSInteger)sideC;
-(double)areaCalculation;
-(double)perimetrCalculation;
-(void)figureInformation;


@end

NS_ASSUME_NONNULL_END
