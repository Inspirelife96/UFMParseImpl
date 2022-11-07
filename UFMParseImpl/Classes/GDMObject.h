//
//  GDMObject.h
//  Bolts
//
//  Created by XueFeng Chen on 2022/10/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GDMObject : NSObject

- (instancetype)init;
- (instancetype)initWithMetaData:(id)metaData error:(NSError **)error NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithMetaData:(id)metaData;

@end

NS_ASSUME_NONNULL_END
