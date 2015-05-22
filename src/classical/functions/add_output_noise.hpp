/* CirKit: A circuit toolkit
 * Copyright (C) 2009-2015  University of Bremen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file add_output_noise.hpp
 *
 * @brief Adds random noise to the output
 *
 * @author Mathias Soeken
 * @since  2.3
 */

#ifndef ADD_OUTPUT_NOISE_HPP
#define ADD_OUTPUT_NOISE_HPP

#include <core/properties.hpp>
#include <classical/aig.hpp>

namespace cirkit
{

aig_graph add_output_noise( const aig_graph& aig,
                            const properties::ptr& settings = properties::ptr(),
                            const properties::ptr& statistics = properties::ptr() );

}

#endif

// Local Variables:
// c-basic-offset: 2
// eval: (c-set-offset 'substatement-open 0)
// eval: (c-set-offset 'innamespace 0)
// End: