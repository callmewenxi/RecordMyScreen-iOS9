/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>
#import "QuartzCore-Structs.h"


@interface NSObject (_CAObjectInternal)
+(/*function-pointer*/ void*)CA_setterForType:(int)type;
+(/*function-pointer*/ void*)CA_getterForType:(int)type;
@end

@interface NSObject (CARenderValue)
-(Object*)CA_copyRenderValue;
@end

@interface NSObject (CAAnimatableValue)
-(id)CA_addValue:(id)value multipliedBy:(int)by;
-(id)CA_interpolateValue:(id)value byFraction:(float)fraction;
-(float)CA_distanceToValue:(id)value;
@end
